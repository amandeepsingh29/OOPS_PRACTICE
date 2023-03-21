#include <iostream>
using namespace std;
class adding{
    public:
    int a;
    adding(int i)  {a=i;}
    adding(int i,int j)  {a=i+j;}
    adding(int i,int j,int k)  {a=i+j+k;}
    adding( adding x,adding z,adding v){a=x.a+z.a+v.a;}

    void printh(){
        cout<<"value is "<<a<<endl;
    }


};
int main(){

    adding a1(55454564);
    a1.printh();
    adding a2(45,88);
    a2.printh();
    adding a3(45,88,100);
    a3.printh();
    adding a4(a1,a2,a3);
    a4.printh();

}