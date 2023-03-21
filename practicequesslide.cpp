#include<iostream>
using namespace std;
class vehicle
{
    public:
    int wheels;
    string name;
    string type;
    

};
class two:public vehicle{
    public:
    void drive(int a,string b,string c){
        cout<<"number of wheels"<<wheels<<endl<<"name"<<name<<"type"<<type<<endl;
        wheels=a;
        name=b;
        type=c;}
        void drive(int a,int b){
            wheels=a;
        name=b;
        cout<<"number of wheels"<<wheels<<endl<<"name"<<name<<endl;
        }

};
class four:public vehicle{
    public:
    void drive(int a,string b,string c){
        wheels=a;
        name=b;
        type=c;
        cout<<"number of wheels"<<wheels<<endl<<"name"<<name<<"type"<<type<<endl; }
        void drive(int a,int b){
            wheels=a;
        name=b;
        cout<<"number of wheels"<<wheels<<endl<<"name"<<name<<endl;
        }
};

int main (){
    four f1;
    f1.drive(4,"ferrari");

}