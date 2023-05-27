#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream ob_file;

    ob_file.open("open_file.txt");

    if (ob_file)
    {
        cout << "error occured";
    }
    else if (!ob_file)
    {
        cout << "access denied";
    }

    ob_file.close();
    return 0;
}