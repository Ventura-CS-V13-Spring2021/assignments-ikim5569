#include <iostream> 
#include <cstdlib> 
using namespace std; 

class DayOfYear
{
  public: 
    void input(); 
    void output(); 
    void set(int newMonth, int newDay); 
    void set(int newMonth); 
    int getMonthNumber(); 
    int getDay(); 
  private: 
    int month; 
    int day; 
}; 

int main()
{
  DayOfYear today, bachBirthday; 
  cout << "Enter today's date: "; 
  today.input(); 
  cout << "Today's date is "; 
  today.output(); 
  cout << endl; 

  bachBirthday.set(3, 21); 
  cout << "Bach's birthday is: "; 
  bachBirthday.output(); 
  cout << endl; 
  if (today.getMonthNumber() == bachBirthday.getMonthNumber() && today.getDay() == bachBirthday.getDay())
    cout << "Happy birthday Bach! "; 
  else 
    cout << "NO BIRTHDAY LOLLL"; 
  return 0; 
}

void DayOfYear::set(int newMonth, int newDay)
{
  month = newMonth; 
  day = newDay; 
}

void DayOfYear::set(int newMonth)
{
  month = newMonth; 
  day = 1; 
}

int DayOfYear::getMonthNumber()
{
  return month; 
}


int DayOfYear::getDay()
{
  return day; 
}

void DayOfYear::input()
{
  cout << "Enter the month as a number: "; 
  cin >> month; 
  cout << "Enter the day of the month: "; 
  cin >> day; 
}

void DayOfYear::output()
{ 
  switch (month)
  {
    case 1: 
      cout << "JAN"; break; 
    case 2: 
      cout << "FEB"; break; 
    case 3: 
      cout << "MARCH"; break; 
    case 4: 
      cout << "APRIL"; break; 
    case 5: 
      cout << "MAY"; break; 
    case 6: 
      cout << "JUNE"; break; 
    case 7: 
      cout << "JULY"; break; 
    case 8: 
      cout << "AUG"; break; 
    case 9: 
      cout << "SEP"; break; 
    case 10: 
      cout << "OCT"; break; 
    case 11: 
      cout << "NOV"; break;
    case 12: 
      cout << "DEC"; break;  
    default: 
      cout << "ERROR! " << endl; 

  }
}


