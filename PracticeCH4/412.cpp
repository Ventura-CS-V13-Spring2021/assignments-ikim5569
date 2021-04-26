#include <iostream> 
#include <iomanip> 
using namespace std; 

void getInput(int&, int&, int&); 
void swap(int&, int&, int&); 

int main(){
  int num1, num2, num3; 
  getInput(num1, num2, num3); 
  cout << "Before swap: " << num1 << setw(5) << num2 << setw(5) << num3 << endl; 

  swap(num1, num2, num3); 

  cout << "after swap " << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl; 
}
void getInput(int& a, int& b, int& c){
  cout << "Enter three integers: " << endl; 
  cin >> a >> b >> c; 

}
void swap(int& a, int& b, int& c){
  int tempA, tempB, tempC; 
  tempA = a; 
  tempB = b; 
  tempC = c; 

  a = c; 
  b = tempA; 
  c = tempB; 

}

