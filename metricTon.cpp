/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ metricTon.cpp

*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  double cerealWeight;
  double cerealToMetricTons;
  double boxesForATon;
  const double METRICTONOUNCES = 35273.92;

  cout << "Enter the weight of your cereal package: " << endl;
  cin >> cerealWeight;
  cerealToMetricTons = cerealWeight / METRICTONOUNCES;
  boxesForATon = METRICTONOUNCES / cerealWeight;


  cout << "The weight of the cereal in metric tons is: " << cerealToMetricTons << endl;
  cout << "Number of cereal boxes needed to have a ton of cereal: " << boxesForATon << endl;

  return 0;
}
