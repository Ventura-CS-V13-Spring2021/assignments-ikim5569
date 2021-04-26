#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
const int N = 10; 

int main(){
  srand(time(0));
  int randomValue, sum;
  double average; 

  int yee[N]; 

  for (int i = 0; i < 10; i++){
    randomValue = rand() % 100; 
    yee[i] = randomValue; 
    sum = sum + randomValue; 
  }

  average = sum/ N; 
  cout << "The sum of the numbers: " <<endl; 

  for (int interesting: yee){
    cout << interesting << endl; 
  }

  cout << "is " << sum << " and the average is " << average; 

}