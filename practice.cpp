#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 

int main(){
  int i; 

  for(i = 2; i< 100; i *= 2)
    cout << i << "\t"; 
  cout << endl;
}
