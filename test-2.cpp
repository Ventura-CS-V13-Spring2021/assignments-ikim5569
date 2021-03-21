#include <iostream> 
using namespace std; 

int main() {
  int num1, num2, num3; 

  cout << "Please input three values between and including numbers 0 and 99! : " << endl; 

  cin >> num1 >> num2 >> num3; 

  if (num1 < 0 || num1 > 99){
    cout << "error! type in another value" << endl; 
    cin >> num1; 
  }

  if (num2 < 0 || num2 > 99){
    cout << "error! type in another value" << endl; 
    cin >> num2; 
  }

  if (num3 < 0 || num3 > 99){
    cout << "error! type in another value" << endl; 
    cin >> num3; 
  }

  if ((num1 == num2) && (num1 == num3) ) {
    cout << "All numbers: " << num1 << " " << num2 << " " << num3 << " are duplicated" << endl; 
  } else if ((num1 != num2) && (num1 == num3)){
    cout << "2 Numbers " << num1 << " and " << num3 << " are duplicated" << endl;  
  } else if ((num1 == num2) && (num1 != num3)) {
    cout << "2 Numbers " << num1 << " and " << num2 << " are duplicated " << endl; 
  } else if ((num1 != num2) && (num2 == num3 )){
    cout << "2 Numbers " << num2 << " and " << num3 << " are duplicated" << endl; 
  } else if ((num1 != num2) && (num2 != num3) && (num1 != num3)){
    cout << "none of the numbers are duplicated." << endl; 
  }

  
}