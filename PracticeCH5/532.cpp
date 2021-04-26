#include <iostream> 
using namespace std; 

int selectmax(int [], int, int); //* array, last index
void printarray(int [], int);
void swap(int [], int, int);


int main(){
  const int N = 5; 
  int a[N] = {5, 10, 3, 1, 9};
  int idx, i;

  cout << "Before sorting : " << endl ;
  printarray(a, N); 

  for (int i = 0; i < (N-1); i++){
    idx = selectmax(a,i, N); 
    swap(a, i, idx); 
    printarray(a, N); 
  }
  
}

int selectmax(int a[], int start, int N){
  int i, max, maxid = 0; 

  for (i = start; i < N; i++){
    if (i == start){
      max = a[i]; 
    } else if ( max < a[i]) {
      maxid = i; 
      max = a[i]; 
    }
  }
  return maxid; 
}
void printarray(int a[], int N){
  for (int i = 0; i < N; i++){
    cout << a[i] << endl; 
  }
    cout << " " << endl; 
}
void swap(int a[], int i, int maxid){
  int temp; 
  temp = a[i]; 
  a[i] = a[maxid]; 
  a[maxid] = temp; 
}
