#include <iostream> 
using namespace std; 

int main(){

  int range1, range2, i, j; 

  cout << "Please enter two values for the range(inclusive). First value should be smaller than second." << endl; 

  cin >> range1 >> range2; 
  
  if (range1 >= range2) {
    cout << "Please enter values again: " << endl; 
    cin >> range1 >> range2; 
  }

  for (i = range1; i <= range2; i++){
    for (j = 2; j <= i; j++){
      if(i % j == 0){ 
        break; 
      } 
    }
    if (j == i){
      cout << i << " is a prime number " << endl; 
    }
  } 
  return 0; 
  
}

  