
#include<iostream>
using namespace std;
template<class T>
T mymax(T a ,T b){
    a>b? cout<<"a is greater, a:"<<a :cout<<"b is greater, b:"<<b;
}

int main(){
    mymax(1,4);
}