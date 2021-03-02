#include <iostream> 
using namespace std; 


int main ()
{
  char c; 
  int i = 65; 

  while (i < 91){
    c = i; 

    if (c % 5 == 4){
      cout << c << " " << endl; 
    } else {
      cout << c << " " ; 
    }
    
    i++; 
  }

} 



