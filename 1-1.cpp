#include <iostream> 
#include <iomanip> 
using namespace std; 

int main(){
  const double rateA = 15.00; 
  const double rateB = 12.00; 
  const double rateC = 9.00; 


  double aSold, bSold, cSold; 



  cout << "How many Class A tickets were sold? " << endl 
       << "How many Class B tickets were sold? " << endl 
       << "How many Class C tickets were sold? " << endl; 

  cin >> aSold >> bSold >> cSold; 

  double revenue = aSold * rateA + bSold * rateB + cSold * rateC; 

  cout << showpoint << fixed << setprecision(2) << "$" << revenue << endl; 



}



