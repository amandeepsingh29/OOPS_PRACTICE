#include <iostream>
using namespace std;
class abc{
    int a;
    public:
    abc(){a=0;}
    abc(int x){a=x;}
    void telloutput(){
        cout<<a;
    }
};


int main(){
    abc a1(4);
    // abc a1[3]={1,0,3};
    abc *m;
    m=&a1;

    // for(int i ;i<3;i++){
        m->telloutput();
    //     m++;
    // }

    
    
    }