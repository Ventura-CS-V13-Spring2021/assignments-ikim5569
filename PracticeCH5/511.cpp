#include <iostream> 
using namespace std; 

const int N = 10; 

int main(){
  int numbers[N] = {5,10,15,20,25,30,35,40,45,50}; 

  for (int print: numbers){
    cout << print << endl; 
  }
  cout << " " << endl; 

  for (int index = (N-1); index >= 0; index--){
    cout << numbers[index] << endl; 
  }
  
}