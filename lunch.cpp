//source code
//
//

#include <iostream>
#include <string>
using namespace std;


int items()
{
    int numberOfItems;
    cout << "Enter the number of items in your lunch: "<< endl;
    
    //getline wasn't working here but I added it to the other functions
    cin >> numberOfItems;
    
    
    return numberOfItems;
}

string fruit()
{
    
    cout << "enter the fruit you want : " << endl;
    string yourFruit;
    cin >> yourFruit;
    
    return yourFruit;
}

string vegetable()
{
  
    cout << "enter the vegetable you want : " << endl;
    string veg;
    cin >> veg;
    
    return veg;
}


