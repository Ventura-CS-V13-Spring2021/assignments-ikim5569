#include <iostream>

#include <fstream>

using namespace std;


void fileWrite(ofstream &, int);

int main()
{
	int num1=5; 
	ofstream 	ofs;

	ofs.open("question5.txt");



	
	fileWrite(ofs, num1);
}


void fileWrite(ofstream &, int){
  ofstream >> int; 

}