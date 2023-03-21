#include<iostream>
using namespace std;
//swap with pointers
void p_swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// swap with reference variable
void r_swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
int a=1;
int b=2;
cout<<"BEFORE SWAP"<<endl;
cout<<"a is "<<a<<endl;
cout<<"b is "<<b<<endl;

    p_swap(&a,&b);
    cout<<"AFTER P. SWAP"<<endl;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

    cout<<"AFTER R. SWAP"<<endl;
    r_swap(a,b);
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
}
// Reference to another reference is not possible.
// Address of a reference cannot be obtained.
// Arrays of references cannot be created.
// Pointer to a reference cannot be created. 
// Reference for a bit-field is not possible.
// A reference variable must be initialized when it is declared unless it is a member of a class, a function parameter, or a return value.
// Null references are prohibited