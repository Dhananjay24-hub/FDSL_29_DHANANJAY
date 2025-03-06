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
void rollsort_insertion() {
    for(i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(s[j].roll_no >s[i].roll_no) {
                struct student temp=s[i];
                 for(int k=i-1;k>=j;k--){
              		s[k+1]=s[k];
            }
            s[j]=temp;
        }
    }
}
printf("Student sorted with Roll_No successfully!(Selection sort)\n");
}
void Agesort_insertion() {
    for(i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(s[j].age>s[i].age) {
                struct student temp=s[i];
                for(int k=i-1;k>=j;k--){
       		s[k+1]=s[k];
            }
            s[j]=temp;
        }
    }
    printf("Student sorted with age successfully!(selection sort)\n");
}
}
void namesort_insertion() {
    for(i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(strcmp(s[j].name,s[i].name)>0) {
                struct student temp=s[i];
                for(int k=i-1;k>=j;k--){
                	s[k+1]=s[k];
            }
            s[j]=temp;
        }
    }
	}
	printf("Student sorted with Name successfully!\n");
}
void display(){
    printf("----STUDENT RECORD---- :\n");
    printf("ROLL_NO\t\tNAME\t\tAGE\n");
    for(i=0; i<n; i++) {
        printf("%d\t\t%s\t\t%d\n",s[i].roll_no,s[i].name,s[i].age);
    }
    printf("\n");
}

int main(){
int choice,ch;
	do{
		printf("1.insert\n2.Display\n3.Sort By roll no\n4.Sort By Age\n5.Sort By Name\n6.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		insert();
		break;
		case 2:
		display();
		break;
		case 3:
		rollsort_insertion();
		break;
		case 4:
		Agesort_insertion();
		break;
		case 5:
		namesort_insertion();
		break;
		case 6:
		return 0;
		break;
		default:
		printf("Invalid choice");
		}
		printf("Do You want to continue(1/0) :");
		scanf("%d",&ch);
	}while(ch==1);
return 0;
}		 
		
		
	   
	   							
  
  
	
