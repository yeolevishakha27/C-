#include <iostream>
using namespace std;

int main() {
//right shift
  int x = 4;
  int num = x >> 2;
  cout << x <<endl;
  cout<< num<<endl;
  

  //left shift
  int y = 3;
  int ynew = y << 2;
  cout << y <<endl;
  cout<< ynew<<endl;

//right shift assignment
 int a = 4;
 a >>= 3;
 cout << a <<endl;


 //left shift assignment
 int b = 5;
 b <<= 4;
 cout<< b <<endl;
 return 0;
}

