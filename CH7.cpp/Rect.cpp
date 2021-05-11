#include <iostream> 
using namespace std; 

class Rect 
{
  private:
    int width; 
    int height;
    static int count;  
  public: 
    Rect() : Rect(0,0) { count+=1;}; 
    Rect(int w, int h) : width(w), height(h) { count+=1;}; 
    static int getCount(void); 
    //static int addCount(void); 
}; 

int Rect::count = 0; 

int Rect::getCount(void)
{
  return count; 
}

// int Rect::addCount(void)
// {
//   count++; 
// }

int main()
{
  Rect(10,10); 
  Rect(20,20); 
  Rect(30,30); 
  cout << "The count is " << Rect::getCount() << endl; 

}


