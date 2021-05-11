#include "student.hpp"
#include "address.hpp"
#include "DOB.hpp"


#include <iostream>
#include <string>
using namespace std;

  Student::Student()
  {
  }
  Student::Student(string stname, int idnum, DOB date, Address addr) : sname(stname), id(idnum), dob(date), address(addr) 
  {
  }
  int Student::getID() const
  {
    return id; 
  }
  string Student::getSname() const
  {
    return sname; 
  }
  DOB Student::getDOB() const
  {
    return dob; 
  }
  Address Student::getAddress() const
  {
    return address; 
  }
  void Student::setSname(string name)
  {
    sname = name; 
  }
  void Student::setID(int num)
  {
    id = num; 
  }
  void Student::setDOB(DOB birth)
  {
    dob = birth; 
    
  }
  void Student::setAddress(Address addr)
  {
    address = addr; 
  }
  void Student::printStudent()
  {
    cout << "Student name: " << sname<< endl; 
    cout << "Student ID " << id << endl; 
    address.printAddress(); 
    dob.printDate(); 

    cout << " " << endl; 
  }
