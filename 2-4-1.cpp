#include <iostream> 
#include <fstream> 
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std; 


int main(){

  int N, rand; 

  ofstream text; 
  text.open("2-4-1.txt"); 

  cout << "How many integers do you want? " << endl; 
  cin >> N; 

  srand(time(0)); 

  for (int i = 0; i <N; i++) {
    rand = random() % 100; 
    text << rand << endl; 

  }
  
  text.close(); 
  return 0; 
}
