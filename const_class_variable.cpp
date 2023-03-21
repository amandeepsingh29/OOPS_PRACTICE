#include<iostream>
using namespace std;
class abc{
    const int a;
    public:
    abc(int i):a(i){}
    void show(){
        cout<<"value is "<<a;
    }

};

int main(){
    abc d(55);
    d.show();
}