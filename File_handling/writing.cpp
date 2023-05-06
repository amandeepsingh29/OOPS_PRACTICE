#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
// template <class Y>
int main(){

fstream datafile;// to create stream object
datafile.open("MyFile.txt",ios::in|ios::out|ios::trunc);
if(datafile){
    cout<<"File is opened.";
}
// in means inout from file and out means output to file
string name;
// getline(cin,name);
getline(cin,name);
cout<<name<<" printed to MyFile.txt";
datafile<<name;






    return 0;

}