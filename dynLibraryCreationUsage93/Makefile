foo: libperson.so export
		gcc -o foo main.c -L. -lperson

libperson.so:
		gcc -shared -o libperson.so person.c -I. -fpic

export:
		export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

clean: 
		rm foo libperson.so 
