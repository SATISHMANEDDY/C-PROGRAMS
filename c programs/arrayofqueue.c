#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int queue[SIZE], f = -1, r = -1, ele;
void enq();
void deq();
void display();
int main() 
{
    int ch;
    while (1) 
	{
        printf("\n1.Enq 2.Deq 3.Display 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
		 {
            case 1: enq(); break;
            case 2: deq(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

void enq() 
{
    if (r == SIZE - 1)
	{
        printf("Queue is Full\n");
    }
	 else
	{
        printf("Enter an element: ");
        scanf("%d", &ele);
        if (f == -1) f = 0;  
        queue[++r] = ele;
    }
    
}

void deq() 
{
    if (f == -1 || f > r) 
	{
        printf("Queue is Empty\n");
    } 
	else
	{
        ele = queue[f];
        f++;
        printf("Deleted Element is %d\n", ele);
        if (f > r) f = r = -1; 
    }
}

void display()
 {
 	int i;
    if (f == -1 || f > r)
	{
        printf("Queue is Empty\n");
    } else 
	{
        printf("Queue elements: ");
        for(i = f; i <= r; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
