#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int count = 0;
    char c;
    ifstream fin("MyFile.txt");
    if (!fin) {
        cout << "File Does not Exist";
        return 0;
    }
    while (fin.get(c)) {
        cout << c;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    fin.close();
    cout << endl << "count is " << count;
    return 0;
}
