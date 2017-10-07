/*Install packages: 
 * apg-get install libusbx // rpm -q -l libusbx
 * apt-get install libusb  
 * apt-get install libusbx-devel //rpm -q -l libusbx-devel
 * 
 * Compile with:
 * gcc -o usbtesgt usbtest.c -lusbx-1.0
 *
 * */

#include <stdio.h>
#include <libusb-1.0/libusb.h>

void print_devices(libusb_device *dev)
{
	struct libusb_device_descriptor desc;
	struct libusb_config_descriptor *config;
	const struct libusb_interface *inter;
	const struct libusb_interface_descriptor *interdesc;
	const struct libusb_endpoint_descriptor *endpointdesc;

	int ret;
	int i, j, k;

	ret = libusb_get_device_descriptor(dev, &desc);

	if(ret < 0)
	{
		fprintf(stderr, "error in getting device descriptor\n");
		return;
	}

	printf("Number of pos configs is %d\n", desc.bNumConfigurations);
	printf("Device class: %d\n", desc.idVendor);
	printf("Product ID: %d\n", desc.idProduct);

	libusb_get_config_descriptor(dev, 0, &config);

	print("Interface: %d\n", config->bNumInterfaces);

	for(i = 0; i < config->bNumInterfaces; i++)
	{
		inter = &config->interface[i];
		printf("number of alt settings: %d\n", inter->num_altsetting);
		for(j = 0; j<inter->num_altsetting; j++)
		{
			interdesc = &inter->altsetting[j];
			printf(" Interface naumber: %d, ", interdesc->bInterfaceNumber);
			printf(" Num of endpoints: %d\n", interdesc->bNumEndpoints);
			for(k = 0; k < interdesc->bNumEndpoints; k++)
			{
				endpointdesc = &interdesc->endpoint[k];
				printf("  Desc Type: %d, ", endpointdesc->bDescriptorType);
				printf("  EP Addr: %d\n", endpointdesc->bEndpointAddress);
			}
		}
	}
	
	printf("\n\n");

}

int main(int argc, char **argv)
{
	libusb_device **devs;
	libusb_context *context = NULL;

	size_t list;
	size_t i;
	int ret;

	ret = libusb_init(&context);

	if(ret < 0)
	{
		perror("libusb_init");
		exit(1);
	}
 
	list = libusb_get_device_list(context, &devs);

	if(list < 0)
	{
		fprintf(stderr, "Error in getting device list\n");
		libusb_free_device_list(devs, 1);
		libusb_exit(context);
		exit(1);
	}

	printf("Ther are %d devices found\n", list);

	for(i = 0; i < list; i++)
	{
		/*print devices specs */
		print_devices(devs[i]);
	}

	return 0;
}
