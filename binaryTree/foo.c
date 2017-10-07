#include <stdio.h>

typedef struct mynode_tag {
	int data;
	struct mynode_tag *left; /* less number */
	struct mynode_tag *right; /* grater number */
} mynode;

void insert(mynode **rt, int num)
{
	mynode *tmp;
	
	if(*rt == NULL)
	{
		tmp = (mynode *) malloc(sizeof(mynode));
		if(tmp==NULL)
		{
			fprintf(stderr, "Unable to allocate mynode\n");
		}
		
		tmp->data = num;
		*rt = tmp;
	}
	else
	{
		if(num > (*rt)->data)
			insert(&(*rt)->right, num);
		else
			insert(&(*rt)->left, num);
	}
}

void print_nodes(mynode *root)
{
	if(root == NULL)
		return;

	/* to to the left/less first*/
	if (root->left != NULL)
		print_nodes(root->left);
	printf("data = %d\n", root->data);

	/* to to the right/greather first*/
	if(root->right != NULL)
		print_nodes(root->right);

}


int main(int argc, char **argv)
{
	int numbers[14] = {19,6, 85, 2,25, 90, 41,23, 11, 7, 99, 82, 48, 32};
	
	int i;
	mynode *root = NULL;

	for(i=0 ; i < 14; i++)
	{
		insert(&root, numbers[i]);
	}

	print_nodes(root);

	return 0;
}
