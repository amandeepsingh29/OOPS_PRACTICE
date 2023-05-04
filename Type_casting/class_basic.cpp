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

    
    friend void display(int x){
        cout<<endl<<"TOTAL MINUTES: "<<endl;
        cout<<x;
    }


};
int main(){


    return 0;
} 