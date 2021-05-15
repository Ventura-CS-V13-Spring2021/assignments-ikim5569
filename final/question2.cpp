#include <iostream> 
using namespace std; 


int main()
{
  int length; 

}


void sort(int a[], int length)
{
  for (int i = length-1; i > 0; i--)
    for (int j = 0; j < length; j++)
      if (a[j] > a[j+1])
      {
        int temp = a[j+1]; 
        a[j+1] = a[j]; 
        a[j] = temp; 
      }
}

