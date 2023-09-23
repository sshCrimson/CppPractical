#include<iostream>
using namespace std; 

// Task 1
// This code is not working, we are trying to access the private fields 
// You need to make class F as a friend for the class GFG
// Try to run code after and think about the real live example 
// When we need to use friend class 

// Task 2
// Try to avoid using friend class 
// Use friend function instead of it

class GFG {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 

};

class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}