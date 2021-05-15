#include <iostream> 
using namespace std; 

void sort(int a[], int length); 
// sorts from greatest to least; 

void print(int a[], int length); 
//prints all elements 


int main()
{
  int length; 
  int arr[20] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12}; 
  length = sizeof(arr)/sizeof(arr[0]); 
  sort(arr, length); 
  print(arr, length); 
  
  cout << " " << endl; 
  cout << "N" << "\t" << "COUNT" << endl; 
  bool switched = true; 
  int count = 0; 

  for (int i = 0; i < length + 1; i++)
  {
    if ( i == 0)
    {
      count = 1; 
      switched = false; 
    }
    else if (switched == false)
    {
      if (arr[i] == arr[i-1])
      {
        count++; 
      } 
      else if (arr[i] != arr[i-1])
      {
        cout << arr[i - 1] << "\t" << count << endl; 
        switched = true; 
      }
    } 
    else if (switched == true)
    {
      count = 1; 
      if (arr[i] == arr[i-1])
      {
        count++; 
        switched = false; 
      } 
      else if (arr[i] != arr[i-1])
      {
        cout << arr[i - 1] << "\t" << count << endl; 
        switched = true; 
      } 
    }
  }

}


void sort(int a[], int length)
{
  for (int i = length-1; i > 0; i--)
      for (int j = 0; j < i; j++)
        if (a[j] < a[j+1])
        {
          int temp = a[j+1]; 
          a[j+1] = a[j]; 
          a[j] = temp; 
        }
}

void print(int a[], int length)
{
  for (int i = 0; i < length; i++)
    cout << a[i] << "\t"; 
  cout << endl; 
}

