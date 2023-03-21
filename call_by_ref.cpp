#include<iostream>

using namespace std;

class good1{
    public:
    int a;
    int mul_2(int&);

};
int good1::mul_2(int &a){
    return (2*a);
}
int main(){
good1 az;
cin>>az.a;
cout<<az.mul_2(az.a);


}