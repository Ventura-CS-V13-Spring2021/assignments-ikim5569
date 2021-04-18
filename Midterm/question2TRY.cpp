#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRdNum(void); 
int isGreater(int, int); 

int main(){
  int preceding, num, N,i; 
 
  ofstream write; 
  write.open("numbers.txt"); 

  cout << "Please enter the number of random numbers: " << endl; 
  cin >> N; 

  srand(time(0)); 
  preceding = random()% 50 + 1; 

  for(i = 0; i < (N-1); i++){
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
  cout << num << endl; 
  return num; 
}

int isGreater( int num, int preceding){
  if (num > preceding){
    return 1; 
  } else {
    return 0; 
  }
} 
