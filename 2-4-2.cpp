#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 

int main(){
  int num, totalNum = 0, min = 100, max = 0; 
  double sum = 0.0, average; 


  ifstream read; 
  read.open("2-4-1.txt"); 

  while (read >> num ) {
    if (num < min) {
      min = num; 
    }
    if (num > max){
      max = num; 
    }

    sum  = sum + num; 
    totalNum++; 
  }
  read.close(); 


  average = sum/totalNum; 

  cout << "There are a total of " << totalNum << " numbers" << endl; 
  cout << "The minimum is " << min << " and the maximum is " << max << endl; 

  cout << "The total sum is " << sum << endl; 
  cout << "The average is " << average << endl; 
  return 0; 
  


}

