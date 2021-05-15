#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

// void testStudent();


int main()
{
  cout << "This program tests the class Student " << endl; 
  char ans; 

  do 
  {
    // testStudent(); 
    cout << "Test again? (y/n)" << endl; 
    cin >> ans; 
  } while ((ans == 'y') || (ans == 'Y')); 
  return 0; 

}

// void testStudent()
// {
//   int classnum; 
//   cout << "Enter the number of classes you are currently enrolled in : "; 
//   cin >> classnum; 

//   Student first("Irene", 5); 



// }
