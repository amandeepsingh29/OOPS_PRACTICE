
#include <iostream>
#include <fstream>
   using namespace std;
   int main()
   {
   ifstream in("MyFile.txt");
   if(!in) {
   cout << "Cannot open file.\n";
  return 1;
}
  in.ignore(10, '\t');
 char c;
  while(in) {
   in.get(c);
  if(in) cout << c;
  }
  in.close();
  return 0;
  }
