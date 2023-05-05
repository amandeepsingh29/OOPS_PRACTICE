#include<iostream>
using namespace std;


class time {
    public:
    int hr;
    int min;
    time (int a,int b){
        hr=a;
        min=b;
    }

    int get_minute(){
        return ((hr*60)+min);
    }


};
class minute{
    public:
    int onlyminute;

    minute

};

int main(){
    time t1(1,20);
    minute m1;
    m1=t1;
    m1.display;
}