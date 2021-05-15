#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> 
#include <string> 

using namespace std; 

class Student
{
  public: 
    Student(); 
    Student(int classnum); 
    Student(const Student& stud); // copy constructor 
    void printValues(); 
    int getNumClasses() { return numClasses; } ; 
    int getNumEnteredClasses() { return used; }; 
    void reset(); 
    void setClassNumAfterReset(int classnum); 
    void addClass(string className); 
    Student& operator = (const Student& rightSide); // overloaded
    ~Student(); // destructor 
    
  private:
    string name; 
    int numClasses; 
    int used; 
    string *classList;  

    

}; 

#endif

  
