#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int stack[SIZE];
int top = -1;
void push(int );
void pop();
void peek();
void display();
int main()
{
    int choice,data;
    while(1)
    {    
        printf("  1. Push 2. Pop 3.peek 4.display ");
        printf(" Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)  
        {
            case 1: 
                printf(" Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break; 
            case 2: 
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                display();
                break;
                default: 
                printf("Invalid choice\n");
        }
    }
    return 0;
}
void push(int data)
{
    if (top >= SIZE)
    {
        printf("Overflow\n");
        return;
    }
    top++;
    stack[top] = data;
}
void pop()
{
    if(top==-1)
    printf("underflow");
    else
    {
        printf("pooped element is %d \n",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
        printf("empty");
    else
        printf("toppest element is  %d  \n",stack[top]);
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d   ",stack[i]);
        printf("\n");
    }
}
