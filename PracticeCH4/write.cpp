#include <iostream> 
#include <fstream> 
#include <string> 
#include <ctime> 
#include <cstdlib> 

using namespace std; 



int main(){

  int N; 
  ofstream write; 
  write.open("happy.txt"); 

  cout << "How many random numbers do you want? " << endl; 
  cin >> N; 

  int i, rand; 

  srand(time(0)); 
  for (i =0; i < N; i++){
    rand = random()%100; 
    write << rand << endl; 
  }
  write.close(); 


  
}
