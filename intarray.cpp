/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ intarray.cpp

*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  int size = 10;
  int numArray[size];
  unsigned int i;
  unsigned int j;

  cout << "Enter 10 numbers: " << endl;
  for (i=0; i<10; ++i){
    cin >> numArray[i];
  }

  cout << "array numbers: " << endl;
  for (j=0; j<10; ++j){
    cout << numArray[j] << endl;
  }

  return 0;
}
