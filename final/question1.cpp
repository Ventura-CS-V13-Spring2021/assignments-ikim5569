#include <iostream> 
#include <string> 
using namespace std;


int getNumDiv(int a[], int elements); 
int main()
{
  int highestIndex; 
  int arr[6] = {1,2,8,11,13, 23};
  int second[6] = {10,20,21,23,41}; 

  int elementWithMost; 
  int highestnumelements; 
  int numElements; 

  for (int i = 0; i < 6; i++)
  {
    numElements = 0; 
    for (int j = 1; j < arr[i]; j++)
    {
      if (arr[i]%j == 0)
      {
        numElements++; 
        cout << "num elements" << numElements << endl; 

      }
    }
    if (numElements > highestnumelements)
      highestnumelements = numElements; 
      elementWithMost = i; 
      cout << elementWithMost << endl; 
  }
  

  // highestIndex = getNumDiv(arr, 6); 
  // cout << "Index with most factors in arr is " << highestIndex << endl; 

  // highestIndex = getNumDiv(second, 5); 
  // cout << "Index with most factors in array second is " << highestIndex << endl; 


  return 0; 
  
  
}


int getNumDiv(int a[], int elements)
{
  int elementWithMost; 
  int highestnumelements; 
  int numElements; 

  for (int i = 0; i < elements; i++)
  {
    numElements = 0; 
    for (int j = 1; j < a[i]; j++)
    {
      if (a[i]%j == 0)
        numElements++; 
    }
    if (numElements > highestnumelements)
      highestnumelements = numElements; 
      elementWithMost = i; 
  }
  return elementWithMost; 
} 




