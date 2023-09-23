#include<iostream>
#include<string>
using namespace std; 

#define BASE_CHAR_LENGTH 128

/* 
    List of tasks:
    1. Create a parametrised constructor for class Weapon. 
    2. Do we need to implement destructor for Weapon class ? Implement it if you need it.
    3. Is there missing type of constructors which are missing ? Implement it if any.
    4. Create few new objects and cout them using toString method to show how your fixes are working.
*/


class Weapon { 
public: 
    Weapon(){
        weapon_name = new char[BASE_CHAR_LENGTH];
        damage = 0;
    }

    string toString(){
        return "weapon name: " + string(weapon_name) + " damage: " + to_string(damage); 
    }

private: 
    char *weapon_name;
    int damage;  
};


int main() { 
    cout << "Create Weapon class object" << endl; 
    Weapon *sword = new Weapon(); 
    cout<< sword->toString();

    return 0;
}