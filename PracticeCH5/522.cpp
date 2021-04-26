#include <iostream> 
#include <fstream> 
#include <string> 
#include <iomanip> 
using namespace std; 
const int N = 5000; 

int makeNameRecord(string[], string[], int[], string[], int[]);
void printoutallrecords(int, string[], string[], int[], string[], int[]);
void printnamewithA(int, string[], string[], int[], string[], int[]);
void printoutcontents(string, string, int, string, int);

int main(){
  string state[N]; 
  string gender[N]; 
  int year[N]; 
  string name[N]; 
  int count[N]; 
  int cnt; 

  cnt = makeNameRecord(state, gender, year, name, count); 
  printoutallrecords(cnt, state, gender, year, name, count); 
  printnamewithA(cnt, state, gender, year, name, count); 

}
 

int makeNameRecord(string state[], string gender[], int year[], string name[], int count[]){
  ifstream read; 
  string readline; 
  int cnt = 0; 
  read.open("babyname.txt"); 

  while(cnt < N){
    if (read >> state[cnt] >> gender[cnt] >> year[cnt] >> name [cnt] >> count [cnt]) 
      cnt++; 
    else {
      cout << "Read Stop at line " <<cnt << endl; 
      break; 
    }
  }

  cout << cnt << " lines were read " << endl; 
  return cnt; 


}


void printnamewithA(int cnt, string state[], string gender[], int year[], string name[], int count[]){
  int lines = 0; 
  cout << "List of babies in CA with name starting with an A " << endl; 

  for (int i = 0; i < cnt; i++){
    if ((name[i].rfind("A", 0) == 0) && (state[i] == "CA")){
      printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
    }
  }

  cout << "total lines " << cnt << endl; 
}

void printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[]){
	for (int i = 0; i < cnt; i++){
		printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
	}
	cout << "total lines: " << cnt << endl;
}
void printoutcontents(string state, string gender, int year, string name, int count){
  cout << setw(5) << state << "\t";
	cout << setw(3) << gender << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}
