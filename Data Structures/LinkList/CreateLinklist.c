#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head;
int main()
{
	int  a , i , n;
	node *node1,*newnode,*temp;
	printf("enter number for create nodes: ");
	scanf("%d",&n);
	node1 = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	node1->data = a;
	node1->next = NULL;
    head=node1;
	temp= node1; 
	for(i=2;i<=n;i++)
	{
        newnode = (node*)malloc(sizeof(node));
        scanf("%d",&a);
        newnode->data = a;
        newnode->next = NULL;			 	
        temp->next = newnode; 
        temp = temp->next;	 	
	}                                                         

	temp=head; 
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
}

