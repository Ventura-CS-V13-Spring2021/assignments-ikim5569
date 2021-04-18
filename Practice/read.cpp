#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main(){
  int num, numbers, min, max; 
  max = 0; 
  min = 100; 
  double sum = 0; 
  numbers = 0; 

  ifstream read; 
  read.open("happy.txt"); 

  while (read >> num){
    numbers++; 
    if (num > max){
      max = num; 
    }
    if (num < min){
      min = num; 
    }
    sum += num; 

  }
  double average = sum/numbers; 
  cout << "WE READ A TOTAL OF: " << numbers << endl; 
  cout << "The AVERAGE IS: " << average << endl;  
  cout << "MIN: " << min << " MAX: " << max << endl; 
  


  

  
}