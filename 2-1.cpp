#include <iostream> 
using namespace std; 

int main(){
  int num1, num2, num3; 

  cout << "Enter three integer values: " << endl; 
  cin >> num1 >> num2 >> num3; 

  if (num2 > num1)
  {
    
    if (num2 > num3)
    {
      cout <<  num2 << " is the greatest" << endl; 
    }
    else 
    {
      cout << num3 << " is the greatest" << endl; 
    }

  }
  else 
  {
    if (num1 > num3)
    {
      cout << num1 << " is the greatest" << endl; 
    } 
    else
    {
      cout << num3 << " is the greatest" << endl; 

    }
  }

  return 0; 

}