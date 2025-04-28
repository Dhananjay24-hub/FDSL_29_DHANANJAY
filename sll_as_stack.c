#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	};
struct node *top,*temp,*newnode;

void push(){
	newnode=malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&newnode->data);
	
	if(top==NULL){
		top=newnode;
		newnode->next=NULL;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
	
}			
void pop(){

	if(top==NULL){
		printf("stack is empty !\n");
	}
	else{
		temp=top;
		top=top->next;
		temp->next=NULL;
		free(temp);
	}
}
void display(){
	temp=top;
	if(top==NULL){
		printf("Stack is Empty !\n");
		}
	
	while(temp!=NULL){
		printf("Element : %d\n",temp->data);
		temp=temp->next;
		}	
}		
		

int main(){
	int choice;
	top=NULL;
	while(1){
		printf("\n1.push\n2.pop\n3.display\n4.Exit\n5.Enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			push();
			break;
			
			case 2:
			pop();
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
