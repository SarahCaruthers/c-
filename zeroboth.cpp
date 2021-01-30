/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ zeroboth.cpp

*/

#include <iostream>

using namespace std;

void zeroBoth(int& num1, int& num2){
  num1 = 0;
  num2 = 0;

  cout << "First number after zeroing: " << num1 << endl;
  cout << "Second number after zeroing: " << num2 << endl;
}

int main (int argc, char **argv){
  int userNum1;
  int userNum2;

  cout << "Enter the first number: " << endl;
  cin >> userNum1;
  cout << "Enter the second number: " << endl;
  cin >> userNum2;

  zeroBoth(userNum1, userNum2);

  return 0;
}
