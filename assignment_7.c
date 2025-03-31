#include<stdio.h>
#define max 100
int stack[max],top=-1;

void push(int value){
    if(top==max-1){
        printf("Stack is full ! Stack overflow !\n");
        return ;
    }
    top++;
    stack[top]=value;
    
}
void display(){
    printf("The binnary form is :");
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main(){
    int value ,rem;
    printf("Enter the decimal Number :");
    scanf("%d",&value);
    while (value>0){
        rem=value%2;
        push(rem);
        value/=2;
    }
    display();
    return 0;
}