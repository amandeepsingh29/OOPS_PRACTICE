#include<iostream>
using namespace std;
class base {
    public:
    int a;
    base(int l){
        cout<<"I am in Base constructor and value of l is "<<l<<endl;
    }
};
class derived : public base{
        public:
        derived(int a , int b):base(b){
            cout<<"I am in derived and value of a is "<<a <<" and value of b is "<<b<<endl;
        }
};
int main(){
    int a;
    derived s1(10,50);
}