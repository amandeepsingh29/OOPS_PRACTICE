#include<iostream>
using namespace std;
class abc{
    public:
    int a=10;
    int l=1;

    friend void welcome_message();
    void fx(int t){
        cout<<"address of object- "<<(long)this<<endl;
        cout<<"passed value is- "<<t<<endl;
    }



};

int main(){
    abc a1,a2;
    a1.fx(a1.a);
    a2.fx(a1.l);
}