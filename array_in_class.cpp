#include<iostream>
using namespace std;
class abc{
    string name1[10];
    string position[10];
    
        public:
    void take_data(); 
    void give_data(); 
};
void abc::take_data(){
    for (int i =0;i<5;i++)
    {   cout<<"enter name-";
        cin>>name1[i];
        // cin.getline (name1[i],10);
        // getline(cin,name1[i],'/n');
        cout<<"enter position-";
        cin>>position[i];
        }
}
void abc::give_data(){
    for(int i=0;i<5;i++){
        cout<<name1[i]<<endl;
        cout<<position[i]<<endl;
    }
}




int main(){
    abc a1;
    a1.take_data();
    a1.give_data();
}