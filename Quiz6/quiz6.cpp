#include <iostream>
#include "integerarray.hpp" 
using namespace std; 

int IntegerArray::getLength(void) const;
{
  return length; 
}

void IntegerArray::sortArray(int flag)  // if flag is 0, ascending, otherwise descending
{

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