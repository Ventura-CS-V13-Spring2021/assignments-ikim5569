#include <iostream> 
using namespace std; 

int main()
{
	int num1, num2, num3, num4;
	int current_min;

	num1 = 25;
	num2 = 20;
	num3 = 15;
	num4 = 3;

	current_min = num1;

	if ( current_min > num2) 
		current_min = num2; 
	if ( current_min > num3) 
		current_min = num3; 
	if ( current_min > num4) 
		current_min = num4; 

	cout << "the minimum is " << current_min << endl;	

}
	