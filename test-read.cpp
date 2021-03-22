#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main() {
  
  int num, ID; 
  string name, department; 
  double salary, sum, average; 

  ifstream read; 
  read.open("employee.txt"); 

  read >> num; 
  cout << "ID" << "\t"; 
  cout << "name" << "\t"; 
  cout << "department" << "\t"; 
  cout << "salary" << endl; 
 

  
  sum = 0; 
  
  while (read >> ID >> name >> department >> salary){
    cout << ID << "\t"; 
    cout << name << "\t"; 
    cout << department << "\t"; 
    cout << salary << endl; 
    sum = sum + salary; 

  }
  read.close(); 
  average = sum/ num; 
  
  cout << "Total: " << sum; 
  cout << " Average: " << average; 

  return 0; 


}