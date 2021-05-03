#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "integerarray.hpp"
using namespace std; 

int IntegerArray::getLength(void) const
{
  return length; 
}
int IntegerArray::getLastElm(void) const
{
  return numbers[length-1]; 
}
void IntegerArray::printAll(void) const
{
  for (int i = 0; i < length; i++)
    cout << numbers[i] << "\t"; 
    cout << endl; 
}
void IntegerArray::fillUp(void)
{
  length = N; 
  srand(time(0)); 
  for (int i = 0; i < length; i++)
  {
    numbers[i] = random()% 51; 
  }
}
void IntegerArray::sortAsc()
{
  int max = 0, min = 0; 

  for (int i = length - 1; i > 0; i--)
    for (int j = 0; j < i; j++)
      if (numbers[j] > numbers[j+1])
      {
        int temp = numbers[j + 1]; 
        numbers[j+1] = numbers[j]; 
        numbers[j] = temp; 
      }
}
void IntegerArray::removeLastelm(void)
{
  length = length-1; 
}
void IntegerArray::appendElement(int v)
{
  numbers[length] = v; 
  length++; 
}