#include<iostream>
#include<string>
using namespace std;
class data_of_client{
    public:
    string name;
    int age;

    data_of_client& compare(data_of_client &x){
        if(age<x.age){
        cout<<"name is - "<<x.name;
        cout<<"age is - "<<x.age;
            return x;
        }
        else if (age>x.age)
        {
         cout<<"name is - "<<name<<endl;
         cout<<"age is - "<<age<<endl;
            /* code */return *this;
        }
        
    }

}a1,a2,*p;


int main(){
    a1.name="Amandeep Singh";
    a1.age=155;
    a2.name="Kiara";
    a2.age=99;
    *p=a1.compare(a2);
    if(!p){
        cout <<"no address";
    }
    else{
        cout <<"have address";

    }
    
}