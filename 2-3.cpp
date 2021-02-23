#include <iostream> 
using namespace std; 

int main()
{
  char  selection;
  cout << "Enter your choice among A, B, C\n";
  cin >> selection;


  switch(selection)
     {
      case 'A': 
      case 'a': 
        cout << "Your choice is A\n" << endl; 
        break; 
      case 'B': 
      case 'b': 
        cout << "Your choice is B\n"<< endl; 
        break; 
      case 'C':
      case 'c': 
        cout << "Your choice is C\n" << endl; 
        break; 
      default: 
        cout << "Not a good choice\n";

     }

  return 0; 
} 
