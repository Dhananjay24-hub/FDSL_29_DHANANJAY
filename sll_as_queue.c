#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *rear=NULL,*front=NULL,*newnode,*temp;

void enqueue(){
	newnode=malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	
	if(rear==NULL){
		front=rear=newnode;
		newnode->next=NULL;
		}
	else{
		temp=rear;
		while(temp->next!=NULL){
			temp=temp->next;
			}
		temp->next=newnode;
		newnode->next=NULL;
		}
}	
void dequeue(){
	temp=front;
	if(temp==NULL){
		printf("Queue is empty !\n");
		}
		
	else{
		
		
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
}
void display(){
	temp=front;
	if(front==NULL && rear ==NULL){
		printf("Stack is Empty !\n");
		}
	
	while(temp!=NULL){
		printf("Element : %d\n",temp->data);
		temp=temp->next;
		}	
}			
int main(){
	int choice;
	while(1){
		printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit\n5.Enter your choice :");
		scanf("%d",&choice);
		switch(choice){
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
			return 0;
			break;
			
			default :
			printf("Invalid choice \n");
		}
	}		
	
	return 0;
}	
