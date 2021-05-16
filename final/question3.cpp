#include <iostream> 
#include <string>
using namespace std;


class Student
{
  public: 
  
    Student(); 
    Student(string n, int num); 
    Student(const Student& rhs); // Copy Constructor
    void input(string n, int num); 
    void printValues();
    void reset(); 
    int getNumClasses() { return num_classes; } ; 
    string getName() { return name; } ; 
    Student& operator = (const Student& rhs); // overloaded operator
    ~Student(); // destructor  
    
  private:
    string name; 
    int num_classes; 
    int used; 
    string *class_list;  

    
}; 

Student::Student() : name(), num_classes(0)
{
  class_list = new string[num_classes]; 
}

Student::Student(string n, int num) : name(n), num_classes(num)
{
  class_list = new string[num_classes];
   for (int i = 0; i < num_classes; i++)
   {
       cout << "Enter the course name : ";
       cin >> class_list[i];
   }
}

Student::Student( const Student& rhs)
{
  name = rhs.name; 
  num_classes = rhs.num_classes; 
  class_list = new string[num_classes]; 
  for (int i = 0; i < num_classes; i++)
    class_list[i] = rhs.class_list[i]; 
} 





void Student::input(string n, int num)
{
    name = n;
   num_classes = num;
   class_list = new string[num];
   for (int i = 0; i < num_classes; i++)
   {
       cout << "Enter the course name : ";
       cin >> class_list[i];
   }

}

void Student::printValues() 
{  
  cout << "NAME: " << name << endl; 
  for (int i = 0; i < num_classes; i++)
  {
    cout << "class " << i+1 << ": " << class_list[i] << endl; 
  } 
  cout << " " << endl; 
}

void Student::reset()
{
  num_classes = 0; 
  class_list = new string[num_classes];
}

Student& Student::operator = (const Student& rhs)
{
  num_classes = rhs.num_classes; 
  name = rhs.name; 
  class_list = new string[num_classes];

  for (int i = 0; i < num_classes; i++)
    class_list[i] = rhs.class_list[i]; 

}


Student::~Student()
{
  delete [] class_list; 
}

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

  Student first("Irene", classnum); 
  first.printValues(); 
   
  cout << "testing the copy constructor " << endl; 
  Student second(first); 
  second.printValues(); 



  cout << "testing input " << endl; 
  first.input("Jane", 2); 
  first.printValues(); 

  cout << "Resetting student 1" << endl; 
  first.reset(); 
  




}


