#include<iostream>
using namespace std;
//  1.	Class polygon contains data member width and height and public method set_value() to assign values to width and height. Class Rectangle and Triangle are inherited from polygon class. Both the classes contain public method calculate_area() to calculate the area of Rectangle and Triangle. Use base class pointer to access the derived class object and show the area calculated.


class polygon{
    protected:
    int width,height;
    public:
    void set_value(int a,int b){
        width=a;
        height=b;
    }
    virtual void calculate_area()=0;
};


class rectangle:public polygon{
    public:
void calculate_area(){
cout<<"Area of rectangle is "<<width*height<<endl;
}    

};


class triangle:public polygon{
    public:
void calculate_area(){
cout<<"Area of rectangle is "<< width*height*0.5<<endl;
}    
    

};
int main(){
polygon *poly1,*poly2;
rectangle rec;
triangle tri;
poly1=&rec;
poly2=&tri;

poly1->set_value(10,10);
poly1->calculate_area();
poly2->set_value(10,10);
poly2->calculate_area();




}