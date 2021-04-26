#include <iostream> 
using namespace std; 
const int declaredSize = 10; 

int main(){
  char arr[declaredSize], next; 
  int index = 0; 

  cout << "Enter the numbers you want in the array and mark the end with a period." << endl; 

  cin >> next; 
  while ((next!='.') && (index < declaredSize)){
    arr[index] = next; 
    index++; 
    cin >> next; 
  }

  int numberUsed = index; 

  cout << "here they are backwards: " << endl; 
  for (index = numberUsed-1; index >= 0; index--)
    cout << arr[index]; 

  return 0; 

}