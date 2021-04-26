#include <iostream> 
#include <string> 
using namespace std; 

int main(){
  string userKeyword; 
  const int N = 10; 
  bool found = false; 
  int index; 


  string names [N] = {"Isabella", "Oliver", "Nella", "Ethan", "William", "Maya", "Noah", "Ben", "Jessica", "Emma"}; 

  cout << "What name are you looking for? " << endl; 
  cin >> userKeyword; 

  for (int i = 0; i < N; i++ ){
    if (names[i] == userKeyword){
      found = true; 
      index = i; 
      break; 
    }
  }

  if (found){
    cout << "The name: " << userKeyword << " was found in the " << index << "th index" << endl; 

  } else {
    cout << "ERROR! Name not found" << endl; 
  }
  
}

