#include "student.hpp"
#include <iostream> 
#include <string>
using namespace std;



Student::Student() : name(), num_classes(0)
{
  class_list = new string[num_classes]; 
}

Student::Student(string n, int num) : name(n), num_classes(num)
{
  class_list = new string[num];
  //  for (int i = 0; i < num_classes; i++)
  //  {
  //      cout << "Enter the course name : ";
  //      cin >> class_list[i];
  //  }
}

// Student::Student(Student &rhs)
// {
//   name = rhs.name; 
//   num_classes = rhs.num_classes; 
//   class_list = new string[num_classes]; 
//   for (int i = 0; i < used; i++)
//     class_list[i] = rhs.class_list[i]; 
// } 


// void Student::input(string n, int num)
// {
//     name = n;
//    num_classes = num;
//    class_list = new string[num];
//    for (int i = 0; i < num_classes; i++)
//    {
//        cout << "Enter the course name : ";
//        cin >> class_list[i];
//    }

// }

// void Student::printValues() 
// {  
//   cout << "NAME: " << name << endl; 
//   for (int i = 0; i < used; i++)
//   {
//     cout << "class " << i+1 << ": " << class_list[i] << endl; 
//   } 
//   cout << " " << endl; 
// }

// void Student::reset()
// {
//   num_classes = 0; 
//   (delete [ ] class_list); 
// }

// Student& Student::operator = (const Student& rhs)
// {
//   num_classes = rhs.num_classes; 
//   name = rhs.name; 

//   for (int i = 0; i < num_classes; i++)
//     class_list[i] = rhs.class_list[i]; 

// }


// Student::~Student()
// {
//   delete [] class_list; 
// }
