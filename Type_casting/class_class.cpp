#include<iostream>
using namespace std;
class minutes{};
 class time{
    public:
      int hrs;
      int mins;

      time(int a,int b){
        hrs=a;
        mins=b;
      }
      friend class minutes;

 };



 class minutes{
    public:
    int mins;

    void operator=(time y){
        mins=((y.hrs*60)+y.mins);

    }
 };




int main(){
    time t1(1,20);
    minutes m1;
    m1 = t1;
}