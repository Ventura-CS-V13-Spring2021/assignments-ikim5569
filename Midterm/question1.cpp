#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main(){
  string name; 
  int test1, test2, greater;  
  greater = 0;  
  double average; 
  double sum = 0; 

  ifstream read; 
  read.open("students.txt"); 

  while (read >> name >> test1 >> test2){
    sum = test1 + test2; 
    average = sum/2; 
    if (average > 80){
      greater++; 
    }

    cout << "name: " << name; 
    cout << "   score 1: " << test1; 
    cout << "   score 2: " << test2; 
    cout << "   sum: " << sum; 
    cout << "   average: " << average << endl; 
  }
  cout << "The total number of students who had a score greater than 80: " << greater << endl; 
  read.close(); 
  return 0; 

}

