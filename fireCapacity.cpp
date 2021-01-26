/* Sarah Caruthers

2350081

I referenced zybooks for this assignemnt.

g++ fireCapacity.cpp

*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  const int MAXROOMCAPACITY = 20;
  int numMeetingAttendees;

  cout << "Enter the number of people attending the meeting: " << endl;
  cin >> numMeetingAttendees;

  if (numMeetingAttendees <= MAXROOMCAPACITY){
    cout << "Legal to hold meeting. No immediate fire danger." << endl;
    int leftOverSpaces = MAXROOMCAPACITY - numMeetingAttendees;
    cout << leftOverSpaces << " more people can attend this meeting." << endl;
  }
  else{
    cout << "Meeting cannot be held. Number of attendees exceeds fire regulations." << endl;
    int overFilledSpaces = numMeetingAttendees - MAXROOMCAPACITY;
    cout << overFilledSpaces << " people must be excluded for the meeting to proceed." << endl;
  }

  return 0;
}
