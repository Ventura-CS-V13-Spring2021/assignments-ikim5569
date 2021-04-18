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

    cout << "num1: " << num1 << endl; 
    cout << "num2: " << num2 << endl; 
    cout << "num3: " << num3 << endl; 

    min = findMin(num1, num2, num3); 
    max = findMax(num1, num2, num3); 

    cout << "min: " << min << " and max: " << max << endl; 

    difference = getDifference(min, max); 

    cout << "difference: " << difference<< endl; 

    write << difference << endl; 
  } while (difference >= 3); 

  write.close(); 
}

int getRdNum(void){
  int num = random() % 9; 
  return num; 
} 

int findMin(int num1, int num2, int num3){
  int min; 
  if ((num1 <= num2) && (num1 <= num3)){
    min = num1; 
  } else if ((num2 <= num1) && (num2 <= num3)){
    min = num2;
  } else if ((num3 <= num1) && (num3 <= num2)) {
    min = num3; 
  }
  return min; 
}

int findMax(int num1, int num2, int num3){
  int max; 
  if ((num1 >= num2) && (num1 >= num3))
    max = num1; 
  if ((num2 >= num1) && (num2 >= num3))
    max = num2; 
  if ((num3 >= num1) && (num3 >= num2))
    max = num3; 
  return max; 
}

int getDifference(int min, int max){
  int difference;  
  difference = max - min; 
  return difference; 
} 

