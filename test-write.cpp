#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 

int main(){

  int num, ID; 
  string name, department; 
  double salary; 

  ofstream write; 

  write.open("employee.txt"); 

  cout << "How many employees? " << endl; 
  cin >> num; 

  write << num << endl; 


  for (int i = 0; i < num; i++){
    cout << "Please enter the individual's ID, name, department, and salary:  " << endl; 

    cin >> ID >> name >> department >> salary; 
    write << ID; 
    write << name; 
    write << department; 
    write << salary; 
    write << endl; 

   



  }

  write.close(); 
  return 0; 
  






}


