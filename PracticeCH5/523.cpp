#include <cstdlib> 
#include <ctime> 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <iomanip> 

using namespace std; 

void makearray(double [],int N);
void printarray(double [],int N);
int outOfOrder(double [], int N);

int main(){
  const int N = 10; 
  double arr[N]; 
  int checkResult; 

  srand(time(0)); 
  makearray(arr, N); 
  printarray(arr, N);
  checkResult = outOfOrder(arr, N);
  
  if (checkResult == -1){
    cout << "The array has sorted order " << endl;
  } else {
    cout << "The " << (checkResult + 1) << "th index is out of order" << endl; 
  }


  


}

void makearray(double n[],int N){
  for (int i = 0; i < N; i++){
    n[i] = (double)rand()/RAND_MAX * 100;
  }

}

void printarray(double n[],int N){
  for (int i = 0; i < N; i++){
    cout << n[i] << endl; 
  }
}

int outOfOrder(double n[], int N){
  for (int i = 0; i < (N-1); i++){
    if (n[i] > n[i+1])
      return i;
  }
  return -1; 
}