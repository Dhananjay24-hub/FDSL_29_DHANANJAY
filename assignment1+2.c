#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[10];
	int age;
};
struct student s[5];
int i,n;
void insert() {
    printf("Enter the no.of students :");
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        printf("Enter The Roll .No of student :");
        scanf("%d",&s[i].roll_no);
        printf("Enter the Name of The student :");
        scanf("%9s",s[i].name);
        printf("Enter the Age of the student :");
        scanf("%d",&s[i].age);
        printf("\n");
    }
    printf("Details inserted successfully!\n");
  } 
void rollsort_selection() {
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].roll_no >s[j].roll_no) {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Student sorted with Roll_No successfully!(Selection sort)\n");
}
void rollsort_bubble(){
	for(i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j].roll_no >s[j+1].roll_no){
				struct student temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Student sorted with roll no by bubble sort\n");
}
void Agesort_selection() {
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].age>s[j].age) {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Student sorted with age successfully!(selection sort)\n");
}
void Agesort_bubble(){
	for(i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j].age > s[j+1].age){
				struct student temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Students sorted with age(bubble sort)");
}
void namesort_selection() {
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(s[i].name,s[j].name)>0) {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Student sorted with Name successfully!\n");
}
void namesort_bubble(){
	for(i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j].name,s[j+1].name)>0){
				struct student temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Student sort with name successfully!(bubble sort)\n");
}
void display(){
    printf("----STUDENT RECORD---- :\n");
    printf("ROLL_NO\t\tNAME\t\t\tAGE\n");
    for(i=0; i<n; i++) {
        printf("%d\t\t%s\t\t%d\n",s[i].roll_no,s[i].name,s[i].age);
    }
    printf("\n");
}
int main(){
int choice,ch,op,c,opt,option;

	do{
	   printf("1.Insert Details\n2.sort by bubble_sort\n3.sort with selection sort\n4.Exit\nEnter your choice :");
	   scanf("%d",&choice);
	   switch(choice){
	   	case 1:
	   	insert();
	   	break;
	   	case 2:
	   	do{
	   		printf("1.sort by roll no\n2.sort with name\n3.sort with age\nEnter your choice:");
	   		scanf("%d",&ch);	
	   		switch(ch){
	   			case 1:
	   			rollsort_bubble();
	   			display();
	   			break;
	   			case 2:
	   			namesort_bubble();
	   			display();
	   			break;
	   			case 3:
	   			Agesort_bubble();
	   			display();
	   			break;
	   			default:
	   			printf("Invalid operator");
	   			}
	   			printf("Do you want to continue (1/0)");
	   			scanf("%d",&op);
	   	}while(op==1);
	   	break;
	   	case 3:
	   		do{
	   		printf("1.sort by roll no\n2.sort with name\n3.sort with age\nEnter your choice:");
	   		scanf("%d",&option);	
	   		switch(option){
	   			case 1:
	   			rollsort_selection();
	   			display();
	   			break;
	   			case 2:
	   			namesort_selection();
	   			display();
	   			break;
	   			case 3:
	   			Agesort_selection();
	   			display();
	   			break;
	   			default:
	   			printf("Invalid operator");
	   			}
	   			printf("Do you want to continue (1/0)");
	   			scanf("%d",&c);
	   	}while(c==1);
	   	break;
	   	case 4:
	   	return 0;
	   	break;
	   	default:
	   	printf("Invalid choice");
	   }
	   printf("Do you want to continue(1/0) :");
	   scanf("%d",&opt);
	}while(opt==1);
	return 0;
}	   
	   							
  
  
	
