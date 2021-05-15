#include <iostream> 
using namespace std; 

int setArray(int a[]); 
void sort(int a[], int length); 
// sorts from greatest to least; 

void print(int a[], int length); 
//prints all elements 

void count(int a[], int length); 


int main()
{
  int firstlength;
  int secondlength;  
  int arr[16] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12}; 

  int second[12] = {-5,-6,-6,-7,0,0,1,4,5,7,8,-3}; 
  firstlength = 16;
  secondlength = 12; 

  sort(arr, firstlength); 
  print(arr, firstlength); 
  count(arr, firstlength); 

  sort(second, secondlength); 
  print(second, secondlength); 
  count(second, secondlength);
  
  

}

int setArray(int a[]) 
{
  int numEntries; 
  int value; 
  cout << "How many elements do you want in your array? "; 
  cin >> numEntries; 

  cout << "Now enter values for each element; the # of values should correspond EXACTLY to the number of elements you requested before. Do not include -100 as one of your values" << endl; 

  cout << "Please enter -100 to signal you are done. " << endl; 

  cin >> value
  do{

  } while ()

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

