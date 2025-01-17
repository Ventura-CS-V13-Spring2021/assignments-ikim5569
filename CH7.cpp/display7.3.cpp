#include <iostream> 
#include <cstdlib> 
using namespace std;

class DayOfYear
{
public: 
  DayOfYear(int monthValue, int dayValue); 
  DayOfYear(int monthValue); 
  DayOfYear(); 
  void input(); 
  void output(); 
  int getMonthNumber(); 
  int getDay(); 
private:
  int month; 
  int day; 
  void testDate(); 
}

class Holiday
{
public: 
  Holiday(); 
  Holiday(int month, int day, bool theEnforcement); 
  void output(); 
private:
  DayOfYear date; 
  bool parkingEnforcement; 
}

int main()
{
  Holday h(2, 14, true); 
  cout << "Testing the class Holiday: " << endl; 
  h.output(); 
  return 0; 
}

Holiday::Holiday() : date(1,1), parkingEnforcement(false)
{ }

Holiday::Holiday(int month, int day, bool theEnforcement) : date (month, day), parkinEnforcemnet(theEnforcement) 
{}

void Holiday::output()
{
  date.output(); 
  cout << endl; 
  if (parkingEnforcement) 
    cout << "Parking laws will be enforced " << endl; 
  else 
    cout << " NO parkign laws today" << endl; 
}

DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue), day (dayValue)
{
  testDate(); 
}

void DayOfYear::testDate()
{
  if ((month < 1) || (month > 12))
  {
    cout << "ILLEGAL MONTH! " << endl; 
    exit(1); 
  }
  if ((day < 1 ) || (day > 31))
  {
    cout << "ILLEGAL DAY! " << endl; 
    exit(1);
  }
}

void DayOfYear::output()
{
  switch(month)...
}