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
  int num1, num2, num3, min, max, difference; 
  ofstream write; 
  write.open("question3.txt"); 
  srand(time(0)); 

  do{
    num1 = getRdNum(); 
    num2 = getRdNum(); 
    num3 = getRdNum(); 

    min = findMin(num1, num2, num3); 
    max = findMax(num1, num2, num3); 

    difference = getDifference(min, max); 

    write << difference << endl; 
  } while (difference >= 3); 
}

int getRdNum(void){
  int num = random() % 9; 
  return num; 
} 

int findMin(int num1, int num2, int num3){
  int min; 
  if ((num1 < num2) && (num1 < num3))
    min = num1; 
  if ((num2 < num1) && (num2 < num3))
    min = num2; 
  if ((num3 < num1) && (num3 < num2))
    min = num3; 
  return min; 
}

