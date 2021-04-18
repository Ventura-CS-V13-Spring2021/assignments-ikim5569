#include <iostream>
#include <fstream>
using namespace std;

int getRdNum(void); 
int isGreater(int); 

int main(){
  int preceding, num, N,i; 
  preceding = 50; 
  ofstream write; 
  write.open("numbers.txt"); 

  cout << "Please enter the number of random numbers: " << endl; 
  cin >> N; 

  for(i = 0; i < N; i++){
    num = getRdNum(); 
    if (isGreater(num)){
      write << num << endl; 
    }
  }
 write.close(); 
}

int getRdNum(void); 
int isGreater(int); 
