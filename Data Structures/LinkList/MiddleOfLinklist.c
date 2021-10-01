#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
} *head;
void createlinklist(int );
void displaylinklist();
void middle(struct node *);
int main()
{
    int n,choice;
    printf("enter node number how much node you want :");
    scanf("%d",&n);
    createlinklist(n);
    printf("\nreal link list is :\n");
    displaylinklist();
    printf("\nPress 1 to find middle singly linked list\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        middle(head);
    }
    return 0;
}
void createlinklist(int n)
{
    struct node *newNode, *temp;
    int data, i;
    if(n <= 0)
    {
        printf("List size must be greater than zero.\n");
        return;
    }
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: "); 
        scanf("%d", &data);
        head->data = data;
        head->next = NULL; 
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL; 
                temp->next = newNode; 
                temp = temp->next;
            }
        }
    }
}
void displaylinklist()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
void middle(struct node *head)
{
    struct node *p,*q;
    p=head;
    q=head;
    if(head!=NULL)
    {
        while(q!=NULL&&q->next!=NULL)      
        {
            p=p->next;
            q=q->next->next;
        }
    }
    printf("%d",p->data);
}
