#include <iostream>
using namespace std;
class abc{
    public:
    abc(float a){
        cout<<"i am in float";
    }
    public:
    abc(int a){
        cout<<"i am in int";
    }
};
int main(){
    abc(10);
    // abc(10);
}
// int->long
// float->double