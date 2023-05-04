#include<iostream>
using namespace std;
class myclass {
    public:

    int hrs;
    int mins;
    myclass (int a,int b){
        hrs=a;
        mins=b;
    }

    operator int(){
        return ((hrs*60)+mins);


    }

};


 void display(int x){
        cout<<endl<<"TOTAL MINUTES: "<<endl;
        cout<<x;
    }
int main(){
    myclass t1(1,20);
    int k = t1;
    display(k);



    return 0;
} 