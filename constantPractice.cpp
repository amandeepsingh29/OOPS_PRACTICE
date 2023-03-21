#include<iostream>
using namespace std;
 class Test  { 
    int x;
    public:
    Test(int s) {cout << "In constructor"<<s<<endl;x=s; } 
    ~Test() { cout << "In destructor "<<x<<endl; } 
}; 
void myfunc() {  static Test obj(1); } 
void myfunc1() {  static Test obj1(2); } 
int main() { 
cout << "Start main()"<<endl;  
 myfunc();   
 myfunc1();   
cout << "End main()"<<endl; 
}
