#include <iostream> 
using namespace std; 

void swap(int&, int&); 
void swap(int&, int&, int&); 
void swap(int&, int&, int&, int&); 
void getInput(int&); 
void getInput(int&, int&); 
void getInput(int&, int&, int&); 
void getInput(int&, int&, int&, int&); 



int main(){
  int num; 
  int num1, num2, num3, num4; 

  do {
    getInput(num); 
    switch(num){
      case 2:
        getInput(num1, num2); 
        swap(num1, num2); 
        cout << num1 << num2 << endl; 
        break; 
      case 3: 
        getInput(num1, num2, num3); 
        swap(num1, num2, num3); 
        cout << num1 << num2 << num3 << endl; 
        break; 
      case 4: 
        getInput(num1, num2, num3, num4); 
        swap(num1, num2, num3, num4); 
        cout << num1 << num2 << num3 << num4; 
        break; 
      default: 
        break; 
    } 
  }while (num!= -1); 

}
void getInput(int& a){
  cout << "ENTER! " << endl; 
  cin >> a; 
}
void getInput(int& a, int& b){
  cout << "ENTER! " << endl; 
  cin >> a >> b; 
}
void getInput(int& a, int& b, int& c){
  cout << "ENTER! " << endl; 
  cin >> a >> b >> c; 

} 
void getInput(int& a, int& b, int& c, int& d) {
  cout << "ENTER! " << endl; 
  cin >> a >> b >> c >> d; 

}




void swap(int& a, int& b){
  int tempA = a; 

  a = b; 
  b=  tempA; 

}
void swap(int& a, int& b, int& c){
  if( a >b)
    swap(a,b); 
  if(a>c)
    swap(a,c); 
  if(b>c)
    swap(b,c); 


}
void swap(int& a, int& b, int& c, int& d){
  swap(a,b); 
  swap(b,c); 
  swap(c,d); 

}