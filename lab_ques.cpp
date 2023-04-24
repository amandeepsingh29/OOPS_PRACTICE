#include<iostream>
using namespace std;
class number{
    public:
    int a,b;
    number(){}
    friend number operator +(number n1,number n2);
    friend number operator --(number n);

};
     number operator +(number n1,number n2){
        number temp;
        temp.a=n1.a+n2.a;
        temp.b=n2.b+n1.b;
        return temp;
     }

    number operator --(number n){
     number temp;
     temp.a=n.a-20;
     temp.b=n.b-20;
     return temp;   
    }

int main(){
number n1,n2;
n1.a=10;
n1.b=10;
n2.a=40;
n2.b=40;

n1=n1+n2;
n1 = --n1;
cout<<"n1.a: "<<n1.a<<"  n1.b: "<<n1.b;
}
