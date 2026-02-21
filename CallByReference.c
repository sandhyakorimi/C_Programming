#include<stdio.h>
void change(int *a){
    *a=50;
}
int main(){
    int a =10;
    change(&a);
    printf("%d",a);
    return 0;
}