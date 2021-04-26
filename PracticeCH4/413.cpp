#include <iostream> 
using namespace std; 

int getInput(int&, int&, int&); 
int maxmin(int, int, int, int&, int&); 

int main(){
  int num1, num2, num3; 
  int max, min; 

  getInput(num1, num2, num3); 
  maxmin(num1, num2, num3, max, min); 
  cout << "max: " << max << "and the min: " << min << endl; 
}
int getInput(int& a, int& b, int& c){
  cout << "Enter 3 integers: " << endl; 
  cin >> a >> b >> c; 

}
int maxmin(int a, int b, int c, int& high, int& low){
  low = high = a; 

  if(low > b)
    low = b; 
  if(low > c)
    low = c; 
  if(high< b)
    high = b; 
  if(high < c)
    high = c; 
  

}
