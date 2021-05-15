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
    void input(string n, int num); 
    void printValues();
    void reset(); 
    Student& operator = (const Student& rhs); // overloaded operator
    ~Student(); // destructor  
    
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

//Write a main function that tests all of your functions.
// Write a suitable main program that tests your class objects and each member functions including the copy constructor.

 
#endif