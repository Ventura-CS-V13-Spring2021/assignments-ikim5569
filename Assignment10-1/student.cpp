#include "student.hpp"
#include <iostream> 
#include <string>
using namespace std;


Student::Student() : numClasses(0), used(0)
{
  classList = new string[numClasses]; 
}

Student::Student(int classnum) : numClasses(classnum), used(0)
{
  classList = new string[classnum]; 
} 

Student::Student(const Student& stud)
{
  numClasses = stud.numClasses; 
  used = stud.used; 
  classList = new string[numClasses]; 
  for (int i = 0; i < used; i++)
    classList[i] = stud.classList[i]; 
}


void Student::reset()
{
  numClasses = 0; 
  used = 0; 
  classList = new string[numClasses]; 
}

void Student::setClassNumAfterReset(int classnum)
{
  numClasses = classnum; 
  classList = new string[numClasses]; 
} 


void Student::addClass(string className)
{
  classList[used] = className;  
  used++;  
}

Student& Student::operator = (const Student& rightSide)
{
  used = rightSide.used; 
  numClasses = rightSide.numClasses; 
  for (int i = 0; i < used; i++)
    classList[i] = rightSide.classList[i]; 
}

Student::~Student()
{
  delete [] classList; 
}
