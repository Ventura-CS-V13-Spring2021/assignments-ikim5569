#include <iostream> 
using namespace std; 

int main(){
  const int SIZE = 3; 
  int i; 
  int number[SIZE] = {10,20,30}; 

  for ( i = 0; i <= 10; i++){
    number[i] = i; 
    cout << i << " inserted" << endl; 

  }
  return 0; 
}