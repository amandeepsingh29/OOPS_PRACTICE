#include<iostream>
using namespace std;
class myclass {
    public:

    int hrs;
    int mins;
    myclass (){
        

    }
    void display(){
        cout<<endl<<"TO DISPLAY TIME IN HRS:MINS"<<endl;
        cout<<hrs<<":"<<mins;
    }
    void operator=(int t){
        cout<<endl<<"By operator = ,Doing basic to class type conversion"; 
        hrs=t/60;
        mins=t%60;
        cout<<endl<<"CONVERSION DONE"; 

    }


};
int main(){
    cout<<endl<<"It can be done with the help of constructors and Operator overloading.";
    int number ;
    cout<<endl<<"enter time in minutes : ";
    cin>>number;
    myclass t1;
    t1=number;


    t1.display();




    return 0;
} 