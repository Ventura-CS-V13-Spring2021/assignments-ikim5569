#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
const int N = 10; 

void makearray(int []); 
void printArray(int []); 
void findminmax(int []); 

int main(){
  int numbers[N]; 
  srand(time(0)); 
  makearray(numbers); 
  printArray(numbers);
  findminmax(numbers); 

}

void makearray(int n[]){
  for (int i = 0; i < N; i++){
    n[i] = rand() % 100; 
  }
}
void printArray(int n[]){
  for (int i = 0; i < N; i++){
    cout << n[i] << endl; 
  }
} 
void findminmax(int n[]){
  int min, max; 
  min = 100; 
  max = 0; 

  for (int i = 0; i < N; i++){
    if (n[i] > max)
      max = n[i]; 
    if (n[i] < min)
      min = n[i]; 
  }

  cout << "the minimum is " << min << " and the maximum is " << max << endl; 

}