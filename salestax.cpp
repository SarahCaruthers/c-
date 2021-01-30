/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ salestax.cpp

*/

#include <iostream>
#include <iomanip>

using namespace std;

float totalPrice(float salesTax, float itemPrice){
  float taxMoney = itemPrice * salesTax;
  float total = taxMoney + itemPrice;

  return total;
}

int main(int argc, char **argv){
  float laSalesTax = 0.1025;
  float itemAmount;

  cout << "Enter the price of your item including cents: " << endl;
  cin >> itemAmount;

  float moneyToPrint = totalPrice(laSalesTax, itemAmount);

  cout << "Total price: $" << fixed << setprecision(2) << moneyToPrint << endl;

  return 0;
}
