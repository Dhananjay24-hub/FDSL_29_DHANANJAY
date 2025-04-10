#include<stdio.h>
# define size 5
int queue[size];
int front=-1,rear=-1;
void enqueue(int value){
    if(rear==size-1-1){
        printf("Queue is full !\n");
        return;
    }
    rear++;
    queue[rear]=value;
    printf("Value enqueued successfully \n");
}
void dequeue(){
    if(front==rear){
        printf("Queue is empty\n");
        return;
    }
    front++;
    printf("Deletion successful!\n");
}
void display(){
    printf("The queue elements are :\n");
    for(int i=front+1;i<=rear;i++){
        printf("%d",queue[i]);
    }
}
int main(){
    int value;
    int choice;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value :");
            scanf("%d",&value);
            enqueue(value);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            return 0;
            break;

            default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}