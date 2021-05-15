#include <iostream> 
using namespace std; 

void sort(int a[], int length); 
// sorts from greatest to least; 

void print(int a[]); 
//prints all elements 

const int N = 20; 
int main()
{
  int arr[N] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12}; 

  //sort(arr); 
  print(arr); 
  



}


void sort(int a[])
{
  for (int i = N-1; i > 0; i--)
      for (int j = 0; j < i; j++)
        if (a[j] < a[j+1])
        {
          int temp = a[j+1]; 
          a[j+1] = a[j]; 
          a[j] = temp; 
        }
}

void print(int a[])
{
  for (int i = 0; i < N; i++)
    cout << a[i] << endl; 
}

