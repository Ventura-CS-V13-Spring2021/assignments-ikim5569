#include <iostream> 
using namespace std; 


int evenSumGet(int evenValue); 
int oddSumGet(int oddValue); 
int main(){
  int evenSum = 0, oddSum = 0; 
  int input; 

  do
  { 
    cout << "Enter your input " << endl; 
    cin >> input; 
    if (input == -1){
      break; 
    } else if (input%2 == 0) {
      evenSum = evenSumGet(input); 
    } else {
      oddSum = oddSumGet(input); 
    }

  } while (true); 

  cout << "The odd sum: " << oddSum << endl; 
  cout << "The even sum: " << evenSum << endl; 

}

int evenSumGet(int evenValue){
  static int totalEven = 0; 
  totalEven += evenValue; 
  return totalEven; 
 

}

int oddSumGet(int oddValue) {
  static int totalOdd = 0; 
  totalOdd += oddValue; 
  return totalOdd; 

}