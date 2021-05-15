#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

void testStudent();


int main()
{
  cout << "This program tests the class Student " << endl; 
  char ans; 

  do 
  {
    testStudent(); 
    cout << "Test again? (y/n)" << endl; 
    cin >> ans; 
  } while ((ans == 'y') || (ans == 'Y')); 
  return 0; 

}

void testStudent()
{
  int classnum; 
  cout << "Enter the number of classes you are currently enrolled in : "; 
  cin >> classnum; 

  Student first(classnum); 

  cout << "Enter exactly " << classnum << " course names. Write 'stop' at the end " << endl;

  string next;
  cin >> next; 

  while(next != "stop")
  {
    first.addClass(next); 
    cin >> next; 
  }
  cout << "You entered the following: " << first.getNumEnteredClasses() << " class names: " << endl; 

  first.printValues(); 

  cout << next << endl; 
  
  cout << "Now checking the copy constructor: " << endl; 
  Student second(first); 
  second.printValues(); 

  cout << "now resetting student 1's classes : " << endl; 
  first.reset(); 
  first.printValues(); 

  cout << "How many classes does student 1 have? " << endl; 
  cin >> classnum; 

  first.setClassNumAfterReset(classnum); 
  
  cout << "Now add 1 class to Student 1's classlist" << endl; 
  cin >> next; 
  first.addClass(next);

  cout << "Student 1's new classlist: " << endl; 
  first.printValues(); 


  cout << "Now checking the overloaded assignment operator. Student 1 = student 2" << endl; 
  first = second; 

  cout << "Student 1: " << endl; 
  first.printValues(); 


  cout << "now resetting student 2's classes : " << endl;
  second.reset(); 
  second.printValues(); 



}
