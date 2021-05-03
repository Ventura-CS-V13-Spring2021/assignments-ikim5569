#include <iostream>
#include "integerarray.hpp" 
using namespace std; 

int IntegerArray::getLength(void) const;
{
  return length; 
}

void IntegerArray::sortArray(int flag)  // if flag is 0, ascending, otherwise descending
{
  if (flag == 0)
  {
    for (int i = length-1; i > 0; i--)
      for (int j = 0; i < i; j++)
        if (numbers[j] > numbers[j+1])
        {
          int temporary = numbers[j+1]; 
          numbers[j+1] = numbers[j]; 
          numbers[j] = temporary; 
        }
  }
  else 
  {
    for (int i = length-1; i > 0; i--)
      for (int j = 0; i < i; j++)
        if (numbers[j] < numbers[j+1])
        {
          int temporary = numbers[j+1]; 
          numbers[j+1] = numbers[j]; 
          numbers[j] = temporary; 
        }

  }

}

void IntegerArray::fillUp(void)
{
  length = N; 
  srand(time(0)); 
  for(int i = 0; i < length; i++)
  {
    numbers[i] = random() % 100; 
  }
}

void IntegerArray::getPrimenumber(void) const
{
  
}

void IntegerArray::printAll(void) const
{
  for (int i = 0; i < length; i++)
    cout << numbers[i] << "\t"; 
    cout << endl; 
}