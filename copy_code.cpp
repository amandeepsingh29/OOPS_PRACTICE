#include<iostream>
using namespace std;
int main()
{
  int *p;
  p = new int(87);
  cout << "Value is: " << *p<<endl;
    if(p){
        cout<<"MEMORY ALLOCATED"<<endl;
    }

  delete p;
  return 0;
}