// 2.	Write a program to create a class shape with functions area and display to find area and display the name of the shape and other essential component of the class. Create derived classes circle, rectangle and triangle each having overridden functions area and display. Write a program to find and display the area of circle, rectangle and triangle. 

#include<iostream>
using namespace std;
class shape {
    
    public:
    float areaofshape;
    virtual void area()=0;
    virtual void display()=0;


};
class circle:public shape {
    public:
    int radius;
    void area(){
        cout<<endl<<"FOR AREA OF CIRCLE"<<endl;
        cout<<"enter radius : ";
        cin>>radius;
        areaofshape=3.14*radius*radius;
        cout<<"Area calculated and stored."<<endl;

    }
     void display(){
        cout<<"Area of circle : "<<areaofshape<<endl;
    }
};
class rectangle:public shape {
    public:
    int length;
    int width;
    void area(){
        cout<<endl<<"FOR AREA OF RECTANGLE"<<endl;
        cout<<"enter length : ";
        cin>>length;
        cout<<"enter width : ";
        cin>>width;
        areaofshape=length*width;
        cout<<"Area calculated and stored."<<endl;

    }
    void display(){
        cout<<"Area of rectangle : "<<areaofshape<<endl;
    }
};
class triangle:public shape {
    public:
    int heigth;
    int base;
    void area(){
        cout<<endl<<"FOR AREA OF TRIANGLE"<<endl;
        cout<<"enter height : ";
        cin>>heigth;
        cout<<"enter base : ";
        cin>>base;
        areaofshape=0.5*heigth*base;
        cout<<"Area calculated and stored."<<endl;

    }
    void display(){
        cout<<"Area of triangle : "<<areaofshape<<endl;
    }
};
int main(){
    circle c1;
    c1.area();
    c1.display();
    
    rectangle r1;
    r1.area();
    r1.display();

    triangle t1;
    t1.area();
    t1.display();
}