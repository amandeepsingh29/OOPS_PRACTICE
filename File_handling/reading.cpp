#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    ifstream data_copy;

    data_copy.open("MyFile2.txt", ios::in);

    if (data_copy)
    {
        cout << "We have access to file" << endl;
    }

    char x;

    while (!data_copy.eof())
    {
        data_copy.flush();
        data_copy >> x;
        cout << x;
    }

    data_copy.close();
    return 0;
}