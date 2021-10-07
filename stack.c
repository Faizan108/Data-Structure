#include <stdio.h>
int stack[5];
int top = -1;
void push()
{
    int num;
    printf("Enter the number to push\n");
    scanf("%d", &num);
    if (top == 4)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
    }
    printf("Poped item = %d\n", item);
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
    printf("\n");
}
void main()
{
    int choice=1, ch;
    while (choice == 1)
    {
        printf("Enter 1 to push\nEnter 2 for pop\nEnter 3 for display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
        printf("Want to continue ,then press 1\n");
        scanf("%d",&choice);
    }
}