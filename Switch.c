#include<stdio.h>
int main(){
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("1st grade");
                break;
        case 2: printf("2nd grade");
                break;
        case 3: printf("3rd grade");
                break;
        default: printf("default block");
    }
    return 0;
}