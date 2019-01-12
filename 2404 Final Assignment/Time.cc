#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Time.h"

//default constructor
Time::Time(int h, int m, int s)
{
  set(h, m, s);
}

//set function to change attributes
void Time::set(int h,int m,int s)
{
  hours   = ( h >= 0 && h < 24) ? h : 0;
  minutes = ( m >= 0 && m < 60) ? m : 0;
  seconds = ( s >= 0 && s < 60) ? s : 0;
}

//compare two times and return true if current object is less
bool Time::operator<(Time& t)
{
  return convertToSecs() < t.convertToSecs();
}

//convert time to seconds
int Time::convertToSecs()
{
  return (hours*3600 + minutes*60 + seconds);

}

//print
void Time::print()
{
  cout<<setfill('0')<<setw(2)<<hours<<":"
      <<setfill('0')<<setw(2)<<minutes<<":"
      <<setfill('0')<<setw(2)<<seconds<<endl;
}

