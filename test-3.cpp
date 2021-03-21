#include <iostream> 
using namespace std; 

int main(){

  int range1, range2, flag; 

  cout << "Please enter two values for the range(inclusive). First value should be smaller than second." << endl; 

  cin >> range1 >> range2; 
  
  if (range1 >= range2) {
    cout << "Please enter values again: " << endl; 
    cin >> range1 >> range2; 
  }
  flag = 0; 

  for (int i = range1; i <= range2; i++){
    for (int j = 2; j < i; j++){
      if(i%j == 0){
        flag = 1; 
        break; 
      } 
    
    }
    if (flag == 0) {
        cout << i << "is prime" << endl;
    } 
  }



  return 0; 
}