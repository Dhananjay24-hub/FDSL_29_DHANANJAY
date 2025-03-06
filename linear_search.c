#include<stdio.h>
struct student{
	int roll_no;
	char name[10];
	int marks;
	};
struct student s[5];
int n,i;	
void insert(){
	printf("Enter the number of students :");
	scanf("%d",&n);
	printf("Enter the %d book details \n",n);
	for(i=0;i<n;i++){
		printf("Enter the student %d details\n ",i+1);
		printf("Enter the Roll No of student%d:",i+1);
		scanf("%d",&s[i].roll_no);
		printf("Enter the name of the student%d:",i+1);
		scanf("%s",s[i].name);
		printf("Enter the marks of the student%d:",i+1);
		scanf("%d",&s[i].marks);
		}
	printf("Details inserted successfully !\n");
}
void search(){
	int k;
	int found=0;
	printf("Enter the Roll_no student to Search :");
	scanf("%d",&k);	
	for(int i=0;i<n;i++){
		if(k==s[i].roll_no){
			found=1;
			printf("Student found!\n ");
			printf("Roll_no :%d\n",s[i].roll_no);
			printf("Name : %s\n",s[i].name);
			printf("Marks :%d\n",s[i].marks);
			}
		}
	if(!found){
		printf("Student not found!\n ");
		}
}
void display(){
	printf("------Student Management system-------\n");
	printf("STUDENT DETAILS ARE :\n");
	printf("Roll_N0\tName\tMarks\n");
	for(i=0;i<n;i++){
		printf("%d\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].marks);
	}
}		
int main(){
	int choice,ch;
	do{
	      printf("1.Insert details\n2.display\n3.Search\n4.Exit\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			insert();
			break;
			case 2:
			display();
			break;
			case 3:
			search();
			break;
			case 4:
			return 0;
			break;
			default:
			printf("Invalid choice\n ");
			}
		printf("Do you Want to continue(0/1):");
		scanf("%d",&ch);
	}while(ch==1);
return 0;
}	
