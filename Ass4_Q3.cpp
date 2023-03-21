#include<iostream>
using namespace std;
class mango;
class apple;
class fruit{
    protected:
    public:
    int num;
    friend void calculate(apple,mango);
};

class apple: public fruit{
    public:
    apple(int a){
        num =a;
    }
    friend class fruit;
    friend void calculate(apple,mango);
};
class mango: public fruit{
    public:
    mango(int a){
        num=a;

    }
    friend class fruit;
    friend void calculate(apple,mango);
};

void calculate(apple a, mango m ){

            cout<<"total number of apple is : "<<a.num<<endl;
            cout<<"total number of mangoes is : "<<m.num<<endl;
            cout<<"total number of fruit is : "<<a.num+m.num<<endl  ;
    }
int main(){
    apple a1(10);
    mango m1(20);
    calculate(a1,m1);

}