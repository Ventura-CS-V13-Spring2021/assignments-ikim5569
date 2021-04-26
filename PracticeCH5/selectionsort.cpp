#include <iostream> 
using namespace std; 

void fillArray(int a[], int size, int& numberUsed); 
void sort(int a[], int numberUsed); 
void swapValues(int& v1, int& v2); 
int indexOfSmallest(const int a[], int startIndex, int numberUsed); 

int main(){
  cout << "This program sorts numbers lowest to highest" << endl; 

  int sampleArray[101], numberUsed; 
  fillArray(sampleArray, 10, numberUsed); 
  sort(sampleArray, numberUsed); 

  cout << "In sorted order the numbers are: " << endl; 
  for (int i = 0; i < numberUsed; i++){
    cout << sampleArray[i] << " " << endl; 
  }
  
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

void sort(int a[], int numberUsed){
  int indexOfNextSmallest; 
  for (int i = 0; i < numberUsed - 1; i++){
    indexOfNextSmallest = indexOfSmallest(a, i, numberUsed); 
    swapValues(a[i], a[indexOfNextSmallest]); 
  }
}
void swapValues(int& v1, int& v2){
  int temp; 
  temp = v1; 
  v1 = v2; 
  v2 = temp; 
}
int indexOfSmallest(const int a[], int startIndex, int numberUsed){
  int min = a[startIndex], indexOfMin = startIndex; 

  for (int i = startIndex; i < numberUsed; i++){
    if (a[i] < min) {
      min = a[i]; 
      indexOfMin = i; 
    }
  }
  return indexOfMin; 
} 
