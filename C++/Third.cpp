#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // float f= 3.3;
    // bool b = true; 
    // string str = "Sandhya";

    // cout << a <<" ";
    // cout << f<< " ";
    // cout << b<< " ";
    // cout << str<< " ";

    // cout << a << "\n" << f << " " << b << endl << str;
    // int d = a+b;
    // cout <<endl<< d;


    // next 

    // int a ; 
    // cout << "enter a number: ";
    // cin >> a;
    // cout << "The number you entered is : "<<a;

    // cout<<endl;

    // string str; 
    // cout << "Please enter your name: ";
    // cin>> str;
    // cout<< "Hii! "<<str;

    string s2; 
    cout <<"Please enter your name: ";
    getline(cin, s2, 'd');   // here we add delimiter i.e prints only san -- until we give d in the input 
                            //  it takes input and when we need multiple lines
    cout<< "Hii!, " <<s2;
    return 0 ;
}