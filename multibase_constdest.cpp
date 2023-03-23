#include<iostream>



// during a derived class uses multiple inheritance it will make use of multi[ly 
// costructor and they will be initialised in way from left to right]
using namespace std;

class base1{
    public:
    base1(){
        cout<<"BASE1"<<endl;
    }
    ~base1(){
        cout<<"DESTROY BASE1"<<endl;
    }
};
class base2{
    public:
    base2(){
        cout<<"BASE2"<<endl;
    }
    ~base2(){
        cout<<"DESTROY BASE2"<<endl;
    }
};
class base3{
    public:
    base3(){
        cout<<"BASE3"<<endl;
    }
    ~base3(){
        cout<<"DESTROY BASE3"<<endl;
    }
    
};

class fun:public base1,public base3,public base2
{
    public:
    fun(){
        cout<<"FUN"<<endl;
    }
    ~fun(){
        cout<<"DESTROY FUN"<<endl;
    }

};





int main()
{
fun f1;
}