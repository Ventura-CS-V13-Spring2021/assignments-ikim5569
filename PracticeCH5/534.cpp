#include <iostream> 
using namespace std; 


void	printout(int	[], int);
void insert(int[], int input, int& N ); 

int main(){
  int input; 
  const int size = 100; 
  int length = 10; 
  int number[size] = {2,4,6,8,9,11, 15, 17, 19,21}; 
  cout << "what value would you like to insert? " << endl; 
  cin >> input; 
  printout(number, length); 
  insert(number, input, length); 
  printout(number, length); 

}

void	printout(int	a[], int length){
  cout << " " << endl; 
  for (int i = 0; i < length; i++){
    cout << a[i] << endl; 
  }
  cout << " " << endl; 
}

void insert(int a[], int input, int& length ){
  int index = 0;
  for (int i = 0; i < length; i++){ 
    if (input < a[i]){
      index = i; 
      break; 
    }
  }

  cout << "index" << index << endl; 
  

  length++; 

  cout << "length" << length << endl; 
  a[length-1] = 0; 
  cout << " a[length-1] test: " << a[length-1] << endl; 

  printout(a, length); 

 

   for (int i = (length-1); i > index; i--){ 
    a[i] = a[i-1]; 
  }

  

  a[index] = input; 

  
}

