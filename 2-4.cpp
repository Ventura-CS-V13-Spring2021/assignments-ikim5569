#include <iostream> 
using namespace std; 

int main()
{
  int i = 65;

  while (i < 91)
  {
    if (i % 5 == 4)
      {
        cout << static_cast<char>(i) << " " << endl;
      } else { 
        cout << static_cast<char>(i) << " ";
      }   
      i++;
    }
}



