#include <iostream> 
#include <string> 
using namespace std;


int getNumDiv(int a[], int elements); 
int main()
{
  int highestIndex; 
  int arr[6] = {1,2,4,6,10, 24};
  int second[6] = {10,20,21,23,41}; 

  highestIndex = getNumDiv(arr, 6); 
  cout << "Index with most factors in arr is " << highestIndex << endl; 

  highestIndex = getNumDiv(second, 5); 
  cout << "Index with most factors in array second is " << highestIndex << endl; 


  return 0; 
  
  
}

