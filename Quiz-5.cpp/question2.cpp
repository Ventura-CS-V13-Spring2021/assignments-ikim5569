#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

void makearray(int [], int);
void printarray(int [], int);
void findmatchnum(int [], int, int [], int);

int main()
{
    const   int SIZE1 = 10;
    const   int SIZE2 = 5;
    int     num1[SIZE1];
    int     num2[SIZE2];

    srand(time(0));

    makearray(num1, SIZE1);
    printarray(num1, SIZE1);

    makearray(num2, SIZE2);
    printarray(num2, SIZE2);

    findmatchnum(num1,SIZE1, num2, SIZE2);
}
void makearray(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 10;
}
void printarray(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << "\t";
    cout << endl;
}
void findmatchnum(int num1[], int size1, int num2[], int size2)
{
  int match = 0; 
  for (int i = 0; i < size2; i++){
    for (int j = 0; j < size1; j++){

      for (int k = (i-1); k = 0; k--) {
        if (num2[i] == num2[k]) 
          break; 
      }
      // if ((i = 1) && (num2[1] == num2[0])
      //   break; 
      // if ((i = 2) && (num2[1] == num2[0])
      //   break; 
      // if ((i = 3) && (num2[1] == num2[0])
      //   break;
      if ( num2[i] == num1[j]){
        match++; 
        break; 
      } 
    } 
  }
   
    cout << "The number of matched elements "  << match << endl;
}