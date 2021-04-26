#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int findMin(int); 
int main(){
  int n; 
  int min; 

  
  srand(time(0)); 
  do 
  {
    cout << "Please enter the number of random numbers you want: " << endl; 
    cin >> n; 

    if (n!=-1){
      min = findMin(n); 
      cout << "The minimum is " << min << endl; 
    }

  } while (n != -1); 
  


}

int findMin(int N){
  int min = 100; 
  int num; 

  for (int i=0; i < N; i++){
    num = rand() % 100;  
    cout << num << endl; 
    if (num < min){
      min = num; 
    }
  }

  return min; 
}