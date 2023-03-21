#include<iostream>
using namespace std;
int main(){
    int x=10;//x is one variable
    int *p=&x;//p is a pointer variable witch stores which address of x
    int &m = *p;//m is reference variable for p.
    // REFERENCE VARIABLE MUST BE INITIALISED
    cout<<"x-"<<x<<endl;
    cout<<"p-"<<*p<<endl;
    cout<<"m-"<<m<<endl;



}