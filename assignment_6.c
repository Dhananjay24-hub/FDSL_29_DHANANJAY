// program showing simple push &pull operations on the stack 
#include<stdio.h>// header files 
#define max 10
int stack[max];     // declaring stack 
int top=-1;      // intialisng the top value as -1

// push function 
void push(int value){
    if(top==max-1){
        printf("Stack is full ! Stack overflow !\n");
        return ;
    }
    top++;
    stack[top]=value;
    printf("Element pushed successfully !");
}
// pull function 
void pop(){
    if(top==-1){
        printf("Stack is empty !stack underflow !");
    }
    top--;
    printf("Element pop successfully !");

}
// display function 
void display(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
// main fnction 
int main(){
    int value,choice,ch;
    // use of do while loop to craete a menu driven program 
    do{
        printf("1.push \n2.pop\n3.display\n4.Exit\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
            printf("Enter the value to push :");
            scanf("%d",&value);
            push(value);
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

            default:
            printf("Invalid choice\n ");
        }
        printf("Do you want to continue  (1/0)");
        scanf("%d",&ch);

    }while(ch==1);
    return 0;   // program trminates here
}