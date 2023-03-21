#include<iostream> 
using namespace std;
void add(float &n)
{ 	n = n + 6;   } 


int main() 
{  float number; 
   number = 8.0/88; 
   cout << " The initial value of number : " << number << 		endl; 
   add(number);
   cout << " The final value of number : " << number << endl; 
   return(0); 	} 
 

