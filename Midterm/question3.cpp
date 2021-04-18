#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;
int getRdNum(void); 
int findMin(int, int, int); 
int findMax(int, int, int); 
int getDifference(int, int); 


int main(){
  int num1, num2, num3, min, max; 
  ofstream write; 
  write.open("question3.txt"); 

  num1 = getRdNum(); 
  num2 = getRdNum(); 
  num3 = getRdNum(); 

  min = findMin(num1, num2, num3); 
  max = findMax(num1, num2, num3); 

  


}