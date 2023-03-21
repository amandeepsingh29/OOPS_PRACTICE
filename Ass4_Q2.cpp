#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    base(){
        
    }


};

class square:public base{
        public:
        square(){cout<<"enter value of a:";
        cin>>a;
            cout<<"Square is: "<<a*a<<endl;
        }
};

class cube:public base{
    
        public:
        cube(){cout<<"enter value of a:";
        cin>>a;
            cout<<"Cube is: "<<a*a*a<<endl;
        }

};



int main(){
    square s1;
    cube c1;

}