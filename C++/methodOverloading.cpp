#include<iostream>
using namespace std;
int func(int a, int b){
    int sum = a+b;
    return sum;
    // cout<< "function1";
}
int func(int a, int b, int c){
    // cout<<"function2";

    int sum = a+b+c; 
    return sum;
}
int main(){
    int k = func(1,2,3);
    cout<< k<<endl;

    return 0;
}