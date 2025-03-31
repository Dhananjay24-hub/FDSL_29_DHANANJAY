// Prpgram :taking prices from user and sorts them in ascenndibg oreder and return the sorted prices 
#include<stdio.h>// header files 
#define max 10
int No_of_products;
int prices[max];    // array to store price 
int passes;    
// function to insert the prices 
void insert(){
    printf("Enter the no of products :");
    scanf("%d",&No_of_products);
    printf("Enter the prices of products :");
    for(int i=0;i<No_of_products;i++){
        scanf("%d",&prices[i]);
    }
    printf("prices inserted succesfully !\n");
}
// display function 
void display(){
    printf("The sorted prices are :\n");
    for(int i=0;i<No_of_products;i++){
        printf("%d ",prices[i]);
    }
}
// bubble sort implementation 
void bubble_sort() {
    passes = 0; // Reset the pass counter
    for (int i = 0; i < No_of_products - 1; i++) {
        int swapped = 0; // Check if any swapping occurs
        for (int j = 0; j < No_of_products - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                int temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
                swapped = 1;
            }
        }
        passes++; // Increment the pass counter
        if (!swapped) break; // Exit if no swapping occurs in this pass
    }
    printf("The prices have been sorted successfully.\n");
}

void display_passes() {
    if (passes == 0) {
        printf("No sorting has been performed yet.\n");
    } else {
        printf("The number of passes made during sorting: %d\n", passes);
    }
}
int main(){
    int choice ,ch;
    // menu driven program using do while loop and switch case statements 
    do{
        printf("1.insert\n2.sort\n3.display\n4.Display passes\n5.exit\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insert();
            break;

            case 2:
            bubble_sort();
            break;
            
            case 3:
            display();
            break;

            case 4:
            display_passes();
            break;
            case 5:
            return 0;
            break;

            default:
            printf("Invalid choice\n");
        }
        printf("\nDo you want to continue :");
        scanf("%d",&ch);
    }
    while(ch==1);
    return 0;// progaram terminates here 
}
