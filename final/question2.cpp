#include <iostream> 
using namespace std; 

int setArray(int a[]); 
void sort(int a[], int length); 
// sorts from greatest to least; 

void print(int a[], int length); 
//prints all elements 

void count(int a[], int length); 

const int N = 20; 

int main()
{
  int arr[20]; 
  int length; 
  length = setArray(arr); 

  sort(arr, length); 
  print(arr, length); 
  count(arr, length); 



}

int setArray(int a[]) 
{
  int numEntries; 
  int value; 
  cout << "How many elements do you want in your array? "; 
  cin >> numEntries; 

  cout << " " << endl; 

  cout << "Enter the element values" << endl; 

  cin >> value; 
  
    for (int i = 0; i < numEntries; i++)
    {
        a[i] = value; 
        cin >> value;
   
    }
  return numEntries; 

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
  cout << " " << endl; 
  for (int i = 0; i < length; i++)
    cout << a[i] << "\t"; 
  cout << endl; 
}

void count(int a[], int length)
{
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
      if (a[i] == a[i-1])
      {
        count++; 
      } 
      else if (a[i] != a[i-1])
      {
        cout << a[i - 1] << "\t" << count << endl; 
        switched = true; 
      }
    } 
    else if (switched == true)
    {
      count = 1; 
      if (a[i] == a[i-1])
      {
        count++; 
        switched = false; 
      } 
      else if (a[i] != a[i-1])
      {
        cout << a[i - 1] << "\t" << count << endl; 
        switched = true; 
      } 
    }
  }
}

