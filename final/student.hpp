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
   
    
  private:
    string name; 
    int num_classes; 
    int used; 
    string *class_list;  

    

}; 

#endif