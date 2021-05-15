#include <iostream> 
#include <string> 
using namespace std;


int getNumDiv(int a[], int elements); 
int main()
{
  int highestIndex; 
  int arr[6] = {1,2,8,11,13, 23};
  int second[5] = {10,20,21,23,41}; 
  int third[4] = {50, 61, 73}; 

  

  highestIndex = getNumDiv(arr, 6); 
  cout << "Index with most factors in arr is element " << highestIndex << " which is " << arr[highestIndex] << endl; 

  cout << " " << endl; 

  highestIndex = getNumDiv(second, 5); 
  cout << "Index with most factors in array second is element " << highestIndex << " which is " << second[highestIndex] << endl;


  cout << " " << endl; 

  highestIndex = getNumDiv(third, 3); 
  cout << "Index with most factors in array third is element " << highestIndex << " which is " << third[highestIndex] << endl; 

  cout << " " << endl; 
  return 0; 
  
  
}


int getNumDiv(int a[], int elements)
{
  int elementWithMost;  
  int highestnumFactors = 0;  
  int numFactors; 

  for (int i = 0; i < elements; i++)
  {
    numFactors = 0; 
    for (int j = 1; j < a[i]; j++)
    {
      if (a[i]%j == 0)
      {
        numFactors++;  

      }
    }
    cout << "num factors in element " << a[i] << " is " << numFactors << endl;

    
    if (numFactors > highestnumFactors)
    {
      highestnumFactors = numFactors; 
      elementWithMost = i; 

    }
  }

  return elementWithMost; 
} 




