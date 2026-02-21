#include<stdio.h>
int main(){
    int num=545, temp=num;
    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(temp==rev){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }
}