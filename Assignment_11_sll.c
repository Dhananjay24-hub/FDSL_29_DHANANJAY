#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
	};
	
struct node *head ,*temp,*newnode,*prevnode;

void InsertAtFirst(){
	newnode = malloc(sizeof(struct node));
	
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	
	if(head==NULL){
		head=newnode;
		newnode->next=NULL;
		
	}
	else {
		newnode->next=head;
		head=newnode;
	}
	
	}
void InsertAtLast(){
	newnode=malloc(sizeof(struct node));
	printf("Enter the data :");
	scanf("%d",&newnode->data);
	
	if(head==NULL){
		head=newnode;
		newnode->next=NULL;
		}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
			}
		temp->next=newnode;
		newnode->next=NULL;
		}
}	
void DeleteAtFirst(){
	if(head==NULL){
		printf("Empty singly linked list");
	}
	else{
		temp=head;
		head=head->next;
		temp->next=NULL;
		free(temp);
	}
}
void DeleteAtLast(){
	if(head==NULL){
		printf("Empty list");
	}
	else if(head->next==NULL){
		head=NULL;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			prevnode=temp;
			temp=temp->next;
			
		}
			prevnode->next=NULL;
		
	}
}					
	
void display()
{
	if(head==NULL){
		printf("Empty list \n");
	}
	else{	
	temp=head;
	printf("The Elements of Sll\n");
	
	while(temp!=NULL){
		printf("Tha Element %d present at %p\n",temp->data,temp);
		temp=temp->next;
		}
	}	
}					
			
int main(){
	int choice;
	head =NULL;
	while(1){
		printf("\n1.Insert At First\n2.Insert At Last \n3.Delete At First\n4.Delete at last \n5.Display \n6.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			InsertAtFirst();
			break;
			
			case 2:
			InsertAtLast();
			break;
			
			case 3:
			DeleteAtFirst();
			break;
			
			case 4:
			DeleteAtLast();
			break;
			
			case 5:
			display();
			break;
			
			case 6:
			printf("Thank You!");
			return 0;
			break;
			
			default :
			printf("Invalid choice\n");
		}
		}
	return 0;
}			

	
