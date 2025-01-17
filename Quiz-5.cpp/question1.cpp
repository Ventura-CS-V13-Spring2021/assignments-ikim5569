#include <iostream> 
#include <iomanip> 
using namespace std; 


int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    for (int i = 0; i < SIZE; i++){
      sum += numbers[i]; 
    }

    for (int i = 0; i < SIZE; i++){
      diff[i] = sum - numbers[i]; 
    }
    cout << "These are the array elements and their differences: " << endl; 

    for (int num: numbers){
      cout << setw(5) << num; 
    }
    cout << endl; 

    for (int num: diff){
      cout << setw(5) << num; 
    }

    cout << endl; 

    return 0; 

}