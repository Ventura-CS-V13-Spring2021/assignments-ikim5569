#include <iostream> 
#include <string> 
#include <fstream> 
using namespace std; 

const int N = 2; 
struct Student
{ 
  string name; 
  int score[N]; 
}; 

void readFile(); 
void writeFile(); 


int main()
{
  readFile(); 
  writeFile(); 
}

void readFile()
{
  ifstream read; 
  read.open("studentinfo.txt"); 
  Student s; 
  double sum, average; 

  while (read >> s.name)
  {
    sum = 0.0; 
    cout << "Name: " << s.name << "\t"; 
    for(int i = 0; i < N; i++)
    {
      read >> s.score[i]; 
      sum += s.score[i]; 
      cout << "score " << i + 1 << " is " << s.score[i] << "\t"; 
    }

    average = sum/N; 
    cout << "sum: " << sum << " average: " << average << endl; 
  }
  read.close();
}

void writeFile()
{
  fstream write; 
  write.open("studentinfo.txt", ofstream::app); 
  Student s; 

  cout << "What is the student's name? "; 
  cin >> s.name; 
  
  for (int i = 0; i < N; i++)
  {
    cout << "Please enter the " << i + 1 << "score: " ; 
    cin >> s.score[i]; 
  }
  write << s.name << "\t"; 
  for (int i = 0; i <N; i++)
  {
    write << s.score[i] << "\t"; 
  }
  write << "\n"; 
  if (write)
  { 
    cout << "SUCCESSFUL!" << endl; 
  }
  write.close(); 
} 

