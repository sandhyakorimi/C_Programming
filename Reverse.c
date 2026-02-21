#include<stdio.h>
int main(){
    int num;
    int temp = num;
    printf("Enter a number you want to reverse: ");
    scanf("%d",&num);
    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    printf("Reverse of a number %d is %d",temp,rev);
    return 0;
}