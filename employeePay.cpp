/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ employeePay.cpp

*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  const double hourlyPay = 16.00;
  const double workHours = 40.00;
  double hoursWorked;

  cout << "Enter the number of hours you worked this week: " << endl;
  cin >> hoursWorked;

  if (hoursWorked > workHours){
    double basePay = workHours * hourlyPay;
    double overTimePay = (hoursWorked - workHours) * 24.00;
    double totalPay = basePay + overTimePay;
    const double SSTax = 0.06;
    const double fedIncomeTax = 0.14;
    const double stateIncomeTax = 0.05;
    const double medInsuranceRate = 10.00;
    double SSTaxTotal = totalPay * SSTax;
    double fedIncomeTaxTotal = totalPay * fedIncomeTax;
    double stateIncomeTaxTotal = totalPay * stateIncomeTax;

    double depositedMoney = totalPay - SSTaxTotal - fedIncomeTaxTotal - stateIncomeTaxTotal - medInsuranceRate;

    cout << "Money earned from your work week after tax: $" << depositedMoney << endl;
  }
  else{
    double totalPay = hoursWorked * hourlyPay;
    const double SSTax = 0.06;
    const double fedIncomeTax = 0.14;
    const double stateIncomeTax = 0.05;
    const double medInsuranceRate = 10.00;
    double SSTaxTotal = totalPay * SSTax;
    double fedIncomeTaxTotal = totalPay * fedIncomeTax;
    double stateIncomeTaxTotal = totalPay * stateIncomeTax;

    double depositedMoney = totalPay - SSTaxTotal - fedIncomeTaxTotal - stateIncomeTaxTotal - medInsuranceRate;

    cout << "Money earned from your work week after tax: $" << depositedMoney << endl;
  }

  return 0;
}
