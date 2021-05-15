#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> 
#include <string> 


class Student
{
  public: 
  
    Student(); 
    Student(string n, int num); 
    //Student(Student &rhs); // Copy Constructor
    // void input(string n, int num); 
    // void printValues();
    // void reset(); 
    // int getNumClasses() { return num_classes; } ; 
    // int getName() { return name; } ; 
    // Student& operator = (const Student& rhs); // overloaded operator
    // ~Student(); // destructor  
    
  private:
    string name; 
    int num_classes; 
    int used; 
    string *class_list;  

    
}; 

#endif 




