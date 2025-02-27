#include<stdio.h>
#include<string.h>
struct student {
    int roll_no;
    char name[10];
    int age ;
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
void Resort() {
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].roll_no >s[j].roll_no) {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Student sorted with Roll_No successfully!\n");
}
void Asort() {
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].age>s[j].age) {
                struct student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("Student sorted with age successfully!\n");
}
void nsort() {
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
void display() {
    printf("----STUDENT RECORD---- :\n");
    printf("ROLL_NO\tNAME\tAGE\n");
    for(i=0; i<n; i++) {
        printf("%d\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].age);
    }
}
int main() {
    int choice ;
    while(1) {
        printf("1.INSERT DETAILS\n2.SORT WITH ROLL NO\n3.SORT WITH NAME \n4.SORT WITH AGE \n5.DISPLAY\n6.Exit\nEnter your choice");
        scanf("%d",&choice );
        switch(choice ) {
        case 1:
            insert();
            break;
        case 2:
            Resort();
            break;
        case 3:
            nsort();
            break;
        case 4:
            Asort();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
            break;
        default :
            printf("Invalid choice ");
        }
    }
    return 0;
}
    