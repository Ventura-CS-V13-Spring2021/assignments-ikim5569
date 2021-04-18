#include <iostream> 
using namespace std; 

int inputValid(int, int); 
void getListPrime(int, int); 

int main(){

  int numOne, numTwo; 
  do {
    cout << "Please enter two integers: " << endl; 
    cin >> numOne >> numTwo;
  } while(inputValid(numOne, numTwo)); 
   
  getListPrime(numOne, numTwo); 
  
}

int inputValid(int num1, int num2){
  if ((num2 > 0) && (num1 > num2)){
    return 0; 
  } else {
    return 1; 
  }
}

void getListPrime(int num1, int num2) {
  int i, j; 

  for (i = num2; i <= num1; i++) {
    for (j = 2; j <= i/2; j++){
      if (i%j == 0){
        break; 
      }
    }
    if (j > (i/2)){
      cout << i << " is a prime number" << endl; 
    }
  }

}
