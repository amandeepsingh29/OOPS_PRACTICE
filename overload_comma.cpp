#include <iostream>
using namespace std;
class myclass{

    public:
    int i ;
    int j;
    myclass operator,(myclass u){
        myclass temp;

         if (i>u.i){
            temp.i=i;

         }
         else{
            temp.i=u.i;
         }
    }
};


int main(){
    myclass a1,a2,max;
    a1.i=10;
    a2.i=20;
    max=(a1,a2);
    cout<<max.i;
}