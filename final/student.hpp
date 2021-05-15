#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> 
#include <string> 


class Student
{
  public: 
  
    Student(); 
    Student(string n, int num); 
    Student(Student &rhs); // Copy Constructor
    void printValues();
    void reset(); 
    Student& operator = (const Student& rhs); // overloaded operator 


   
    
  private:
    string name; 
    int num_classes; 
    int used; 
    string *class_list;  

    
}; 


// A function that inputs all values from the user, including the list of class names(the same implementation as the Constructor).
// This function will have to support input for an arbitrary number of classes.
// When the member data "numClasses" has assigned with the positive value,
// classist = new string [numClasses];

// An overloaded assignment operator that correctly makes a new copy of the list of courses.
// A destructor that releases all memory that has been allocated. Write a main function that tests all of your functions.
// Write a suitable main program that tests your class objects and each member functions including the copy constructor.

 
#endif