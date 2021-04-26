#include <iostream> 
using namespace std; 
const int declaredSize = 20; 

void fillArray(int a[], int size, int& numberUsed); 
int search(const int a[], int numberUsed, int target); 

int main(){
  int arr[declaredSize], listSize, target; 

  fillArray(arr, declaredSize, listSize);

  char ans; 
  int result; 
  do {
    cout << "Enter a number to search for " << endl; 
    cin >> target; 

    result = search(arr, listSize, target); 
    if (result == -1)
      cout << "Target is not on the list " << endl; 
    else 
      cout << target << "is stored in array position " << result << endl; 

    cout << "Search again? (y/n)" << endl; 
    cin >> ans; 
  } while ((ans != 'n') && (ans != 'N')); 

  cout << "end of program " << endl; 
  return 0; 
}

void fillArray(int a[], int size, int& numberUsed){
  cout << "Enter up to " << size << " scores and mark the end of list with a negative number" << endl; 
  
  int next, index = 0; 

  cin >> next; 

  while ((next >= 0) && (index < size)){
    a[index] = next; 
    index++; 
    cin >> next; 
  }

  numberUsed = index; 
} 

int search(const int a[], int numberUsed, int target){
  int index = 0; 
  bool found = false; 

  while((!found) && (index < numberUsed)){
    if (target == a[index])
        found = true; 
    else 
        index++; 
  }

  if(found) 
    return index; 
  else 
    return -1; 
}

