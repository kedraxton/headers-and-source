
#include "lunch.hpp"


#include <iostream>

using namespace std;

int main()
{
    int itemsInLunch = items();
    cout << "You've got " << itemsInLunch << " items in your lunch. "<< endl;
    
    string fruit1 = fruit();
    cout<< "You added a " << fruit1 << " to your lunch" << endl;
    
    string veggie = vegetable();
    cout << "You added a " << veggie << " to your lunch " << endl;
    
    cout << "You have " << itemsInLunch << " items in your lunch including a " << fruit1 << " and a " << veggie << ". Yum! " << endl;
    
    
    return 0;
}

