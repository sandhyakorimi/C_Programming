#include<iostream>
using namespace std;

void func(string x){
    cout<<"Hello! "<<x<<endl ;
}
int add(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    func("Sandhya");
    int k = add(32,4);
    cout<<k<<endl;
    return 0;
}