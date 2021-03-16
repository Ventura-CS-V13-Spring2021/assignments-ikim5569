#include <iostream> 
using namespace std; 

int main(){
  int num, i, num1, num2; 

  cout << "Input 2 numbers: "<< endl; 

  cin >> num1 >> num2; 

  while (num1 < 0 || num2 > 100){
    cout << "Input 2 numbers: "<< endl; 
    cin >> num1 >> num2; 
  }

  for (num = num1; num <= num2; num++){
    for (i = 2; i <= num; i++){
      if (num % i == 0){
        break; 
      }
    }
    if (i == num){
      cout << num << " is prime" << endl; 
    }

    
  }
  
} 