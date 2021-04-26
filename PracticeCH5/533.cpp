// shift numbers to left "shiftcount" number of times 

#include <iostream> 
using namespace std; 

void	shiftleft(int	[], int, int);
void	shiftleftone(int	[], int);
void	printout(int	[], int);

int main(){
  const int SIZE = 10; 
  int shiftcount; 
  int number[SIZE] = {0,1,2,3,4,5,6,7,8,9}; 

  cout << "Enter your number for circular shift " << endl;  
  cin >> shiftcount; 

  printout(number, SIZE); 
  shiftleft(number, SIZE, shiftcount); 
  printout(number, SIZE); 
}
void	printout(int	a[], int size){
  cout << " " << endl; 
  for (int i = 0; i < size; i++){
    cout << a[i] << endl; 
  }
  cout << " " << endl; 
}

void	shiftleft(int	a[], int SIZE, int shiftcount){
  for (int i = 0; i < shiftcount; i++){
    shiftleftone(a, SIZE); 
  }
}
void	shiftleftone(int	a[], int SIZE){
  int temp = a[0]; 
  for (int i = 0; i < (SIZE-1); i++){
      a[i] = a[i+1]; 
  }
  a[SIZE-1] = temp;  
}

