#include <iostream>
using namespace std; 

int main()
{
  int num1, num2, num3; 

  cout << "Enter three integer values: " << endl; 
  cin >> num1 >> num2 >> num3; 

  if (num1 == num2)
  {
    if (num1 == num3)
    {
      cout << "All numbers are the same! " << endl; 
    }
    else 
    { 
      cout << "There are two duplicated numbers " << endl; 
    }
  }
  else 
  { 
    if (num1 == num3)
    {
      cout << "There are two duplicated numbers " << endl; 
    }
    else 
    { 
      cout << "All numbers are distinct! " << endl; 
    }
  }
}