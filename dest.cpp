#include <iostream>
 
using namespace std;
 
// You can try to run this code and find out what is wrong in the output 
// After try investigate the issue and fix it. 

class base {
  public:
    base()    
    { cout << "Constructing base\n"; }
    ~base()
    { cout<< "Destructing base\n"; }    
};
 
class derived: public base {
  public:
    derived()    
     { cout << "Constructing derived\n"; }
    ~derived()
       { cout << "Destructing derived\n"; }
};
 
int main()
{
  derived *d = new derived(); 
  base *b = d;
  delete b;
  getchar();
  return 0;
}