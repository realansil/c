#include <stdio.h>

#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
     int value;
     printf("enter value to enqueue: ");
     scanf("%d", &value);
     
     if (rear == SIZE - 1)
        printf("Queue Overflow\n");
     else 
     {
           rear++;
           queue[rear] = value;
     }
}

void dequeue(){
if (front == rear)
printf("queue underflow\n");
else 
{
front++;
printf("dequeued %d \n", queue[front]);
}
}
void display()
{ if (front == rear)
printf("queue is empty\n");
else
{
printf("queue element : ");
for (int i = front +1; i <= rear; i++)
    printf("%d ", queue[i]);
   printf("\n");
   
 }
}

int main()
{

        int choice;
        
                 printf("\n*** MENU ***\n");
                 printf("1. Enqueue\n");
                 printf("2. Dequeue\n");
                 printf("3. Display\n");
                 printf("4. Exit\n");
                 while(1)
           {
           printf("enter your choice:");
           scanf("%d",&choice);
           switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
     
