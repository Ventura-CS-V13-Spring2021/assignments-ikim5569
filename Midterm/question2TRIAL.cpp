#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

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
    if (isGreater(num, preceding)){
      write << num << endl; 
      preceding = num; 
    }
  }
 write.close(); 
}

int getRdNum(void){
  int num; 
  srand(time(0)); 
  num = random()% 50 +1; 
  return num; 
}

int isGreater( int num, int preceding){
  if num < 


} 
