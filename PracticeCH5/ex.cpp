#include <iostream> 
using namespace std; 
const int maxNumberOfScores = 10; 

void fillArray(int a[], int size, int& numberUsed); 
double computerAverage(const int a[], int numberUsed); 
void showDifference(const int a[], int numberUsed); 

int main(){
  int score[maxNumberOfScores], numberUsed; 
  fillArray(score, maxNumberOfScores, numberUsed); 
  showDifference(score, numberUsed); 

  return 0; 
}

void fillArray(int a[], int size, int& numberUsed){
  cout << "Enter up to " << size << " scores and mark the end of list with a negative number" << endl; 
  
  int next, index = 0; 

  cin >> next; 

  while ((next >= 0) && (index < size)){
    a[index] = next; 
    index++; 
    cin >> next; 
  }

  numberUsed = index; 
} 

double computerAverage(const int a[], int numberUsed){
  double total = 0; 
  for (int index = 0; index < numberUsed; index++){
    total = total + a[index]; 
  }
  if (numberUsed > 0) {
    return (total/ numberUsed); 
  } else {
    cout << "ERROR! 0 cannot be divided" << endl; 
    return 0; 
  }
}
void showDifference(const int a[], int numberUsed){
  double average = computerAverage(a, numberUsed); 
  cout << "Average of the " << numberUsed << " socres = " << average << endl; 
  cout << "The scores are: " << endl; 

  for(int i = 0; i< numberUsed; i++){
    cout << a[i] << " differs by " << (average - a[i]) << endl;  
  }
  
}
