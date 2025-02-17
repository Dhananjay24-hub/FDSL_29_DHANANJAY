#include<stdio.h>
#include<string.h>
#define max 10
struct book{
	int id;
	char title[15];
	char author[15];
	};
struct book b[max];
int size=0;
int i;
void insert(int id,char title[],char author[],int pos){
	for(int i=size+1;i>=pos;i--){
		b[i]=b[i-1];
		}
	b[pos-i].id=id;
	strcpy(b[pos-i].title,title);
	strcpy(b[pos-i].author,author);
	printf("Book added successfully");
	size++;
	}
void delete(){
   int bookid;
   int found=0;
   printf("Enter the book id :");
   scanf("%d",&bookid);
   for(int i=1;i<=size;i++){
   if(b[i].id==bookid){
   	found=1;
   	for(int j=i;j<size-1;j++){
   		b[j]=b[j+1];
   		
   		}size--;	
   		printf("Book deleted successfully ");
   		}
	}
   if(!found){
   	printf("Book not found ");
   	}
   	}
void modify(){
	int bookid;
	int found=0;
	int ch;
	printf("Enter the id of the book you want to update");
	scanf("%d",&bookid);
	for(i=0;i<=size;i++){
		if(b[i].id==bookid){
		found=1;
		printf("\nBook found");
		printf("\n1.update id\n2.update title\n3.update author\nEnter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			printf("Enter the new book id:");
			scanf("%d",&b[i].id);
			printf("id updated!");
			break;
			case 2:
			printf("Enter the new book title:");
			scanf("%s",b[i].title);
			printf("Title updated");
			break;
			case 3:
			printf("Enter the new book author:");
			scanf("%s",b[i].author);
			printf("Author updted!");
			break;
			default:
			printf("invalid choice"); 
		}
		}
		}
	if(!found){
		printf("Book not found");
		}
		}
void display(){
	printf("\nLIBRARY COLLECTION :");
	for (int i=1;i<=size;i++){
		printf("\nBOOK ID : %d",b[i].id);
		printf("\nBOOK TITLE : %s",b[i].title);
		printf("\nBOOK AUTHOR : %s",b[i].author);
		printf("\n");
		}
		}
int main(){
	int id,ch,choice;
	char title[15];
	char author[15];
	int pos;
	printf("WELCOME TO DHANANJAY'S LIBRARY ");
	do{
	   printf("\n1.insert\n2.delete\n3.modify\n4.display\n5.exit");
	   printf("\nEnter your choice :");
	   scanf("%d",&choice);
	   switch(choice){
	   	case 1:
	   	printf("Enter the book id :");
	   	scanf("%d",&id);
	   	printf("Enter the title :");
	   	scanf("%s",title);
	   	printf("Enter the author:");
	   	scanf("%s",author);
	   	printf("Enter the position :");
	   	scanf("%d",&pos);
	   	insert(id,title,author,pos);
	   	break;
	  case 2:
	  delete();
	  break;
	  case 3:
	  modify();
	  break;
	  case 4:
	  display();
	  break;
	  case 5:
	  printf("THANK YOU !");
	  return 0;
	  break;
	  default:
	  printf("invalid choice");
	  }
	  printf("\nDo you want to continue :(1/0)");
	  scanf("%d",&ch);
	  }while(ch!=0);
	  printf("THANK YOU !");
	  return 0;
	  }
	   				
				
	
   					
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
