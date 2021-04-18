#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
  int num, previousNumber; 


  srand(time(0)); // Seed for the random number. 
  // If we use the same seed, we will get the same series of numbers
//   srand(10);

  previousNumber = rand() % 100; 
  cout << previousNumber << endl; 

  for (int i = 1; i < 5; i++) {
    num = rand() % 100; 
    cout << num << endl; 

    if (num > previousNumber) {
      cout << num << " is greater than " << previousNumber << endl; 
    }

    previousNumber = num; 

  }
  return 0; 
}

