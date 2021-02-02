#include <iostream> 
//#include <iomanip> 
using namespace std; 

main(){
  double Farenheit, Celcius; 

  cout << "Type in the degrees in Celcius " << endl; 

  cin >> Celcius; 

  Farenheit = 9/5.0 * Celcius + 32; 

  cout << Celcius << " Celcius is " << Farenheit << " Farenheit" << endl; 


} 