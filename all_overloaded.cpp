#include <iostream>
using namespace std;

class myclass {
    public:
    int a;
    void operator+(myclass x){
        a=a+x.a;

    }
    void operator-(myclass x){
        a=a-x.a;

    }
    myclass operator=(myclass x){
        myclass temp;
        temp.a=x.a;
        return temp;

    }
    myclass operator++(){//preincrement
        a++;
        return *this;
    }
    myclass operator--(){
        a--;
        return *this;
    }
};



int main(){
    myclass a1;
   a1.a=20;

    cout<<a1.a;

}