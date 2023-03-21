#include<iostream>
using namespace std;
class abc{
    public:
    int a ;

}a1,a2,*p_obj;//initialisation of pointer to object
//initialisation of pointer to member
int abc::*p_member;


int main(){
p_member=&abc::a;

p_obj=&a1;//giving address to pointer to object
p_obj->a=10;
cout<<"p_obj->a -";
cout<<p_obj->a;
cout<<"p_obj->*p-member - ";
cout<<p_obj->*p_member;





}












