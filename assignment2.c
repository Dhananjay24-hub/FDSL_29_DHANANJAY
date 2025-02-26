#include<stdio.h>
// sorting student record using the logic of bubble sort 
struct student{
    int roll_no;
    char name[10];
    int marks;
};
struct student s[5];
int i;
int n;
// fuction for inserting details
void insert(){
    printf("Enter the number of students you want to add :");
    scanf("%d",&n);
    printf("\nEnter the student details :\n");
    for(i=0;i<n;i++){
        printf("Enter  roll.no :");
        scanf("%d",&s[i].roll_no);
        printf("Enter the Name of the student :");
        scanf("%s",s[i].name);
        printf("Enter the Marks :");
        scanf("%d",&s[i].marks);
    }
    printf("details inserted succesfully!\n");
}
// fuction which sorts the records with id 
void idsort(){
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].roll_no>s[j+1].roll_no){
                struct student temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("Studebts sorted with ID succesfully :\n");
}
// fuction which sorts  the record with marks 
void msort(){
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].marks>s[j+1].marks){
                struct student temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("Students sorted with marks succesfully!\n");
}
//function to display the records 
void display(){
    printf("Sorted elements :\n");
    printf("ROLL NO\tNAME\tMARKS\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].marks);
    }
}
int main()
{
    int choice;
    while(1){
        printf("1.INSERT DETAILS\n2.SORT(ROLL NO)\n3.SORT(MARKS)\n4.DISPLAY\n5.EXIT\nENTER YOUR CHOICE");
        scanf("%d",&choice);
        switch(choice){ // switch case to handle each fuction 
            case 1:
            insert();
            break;
            case 2:
            idsort();
            break;
            case 3:
            msort();
            break;
            case 4:
            display();
            break;
            case 5:
            return 0;
            break;
            default:
            printf("Invalid choice :");
        }
    }
    return 0;
}