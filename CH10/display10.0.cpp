#include <iostream> 
using namespace std; 

class PFArrayD
{
  public:
    PFArrayD(); 
    PFArrayD(int capacityValue); 
    PFArrayD(const PFArrayD& pfaOject); 
    void addElement(double element); 
    bool full() const {return (capicity == used);} 
    int getCapacity() const { return capacity; }
    int getNumberUsed() const {return used;} 
    void emptyArray(){used = 0; }
    double& operator[] (int index); 
    PFArrayD& operator = (const PFArrayD& rightSide);
    ~PFArrayD(); 

  private:
    double *a; 
    int capacity; 
    itn used; 

}

PFArrayD::PFArrayD() : capacity(50), used(0)
{
  a = new double[capacity]; 
}

...

PFArrayD::PFArrayD(const PFArrayD& pfaOject) : capacity(pfaOject.getCapacity()), used(pfaOject.getNumberUsed())
{
  a = new double[capacity]; 
  for (int i = 0; i < used; i++)
    a[i] = pfaOject.a[i]; 
}
