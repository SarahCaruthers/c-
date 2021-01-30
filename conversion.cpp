/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ conversion.cpp

*/

#include <iostream>
#include <string>

using namespace std;

// void getInput(){
//   cout << "Enter feet first: " << endl;
//   cin >> userFeet;
//   cout << "Enter inches now: " << endl;
//   cin >> userInches;
// }
float convertToFeet(float& feet){
  float feetToMeters = feet * 0.3048;
  return feetToMeters;
}
float convertToInches(float& inches){
  float inchesToCentimeters = inches * 2.54;
  return inchesToCentimeters;
}
void displayConversion(float userMeters, float userCentimenters){
  cout << "Meters: " << userMeters << " Centimeters: " << userCentimenters << endl;
}

int main(int argc, char **argv){
  float userInches;
  float userFeet;
  string keepGoing;

  cout << "Enter your measurements continuously for conversion. To stop, enter \"exit\" ";
  while (keepGoing != "exit"){
    cout << "Enter feet first: " << endl;
    cin >> userFeet;
    float meters = convertToFeet(userFeet);
    cout << "Enter inches now: " << endl;
    cin >> userInches;
    float centimeters = convertToInches(userInches);
    displayConversion(meters, centimeters);
    cout << "Want to keep going? Enter \"exit\" for no and anythiing else for yes." << endl;
    cin >> keepGoing;
  }

  return 0;

}
