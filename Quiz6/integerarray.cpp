#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "integerarray.hpp"
using namespace std; 


int IntegerArray::getLength(void) const
{
  return length; 
}

void IntegerArray::sortArray(int flag)
{ 
  if (flag == 0){
    for (int i = length-1; i > 0; i--)
      for (int j = 0; j < i; j++)
        if (numbers[j] > numbers[j+1])
        {
          int temp = numbers[j+1]; 
          numbers[j+1] = numbers[j]; 
          numbers[j] = temp; 
        }
  } 
  if (flag != 0) {
    for (int i = length-1; i > 0; i--)
      for (int j = 0; j < i; j++)
        if (numbers[j] < numbers[j+1])
        {
          int temp = numbers[j+1]; 
          numbers[j+1] = numbers[j]; 
          numbers[j] = temp; 
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

int IntegerArray::getPrimenumber(void) const
{
  int primeNum = 0, i, j; 
  for (i = 0; i < length; i++)
  {
    for (j = 2; j <= numbers[i]; j++){
      if (numbers[i]%j == 0)
        break; 
    }
    if (j==numbers[i]) 
      primeNum++; 
  }
  return primeNum; 
} 

void IntegerArray::printAll(void) const
{
  for (int i = 0; i < length; i++)
    cout << numbers[i] << "\t"; 
    cout << endl; 
}