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
  
  while (read >> ID >> name >> department >> salary){
    cout << ID << "\t"; 
    cout << name << "\t"; 
    cout << department << "\t"; 
    cout << salary << endl; 
    sum = sum + salary; 

  }
  
  cout << "Total: " << sum; 
  cout << " Average: " << 


}