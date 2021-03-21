#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 
int main(){
  int numScore; 

  fstream inputStream; 
  inputStream.open("scores.txt"); 

  inuptStream >> numScore; 

  for (int i = 0; i < numScores; i++ ){
    string name; 
    int score; 
    inputStream >> name; 
    inputStream >> score; 
    cout << name << "," << score << endl; 
  }
}