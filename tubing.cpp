#include <iostream>
 
using namespace std;
 
int main()
{
    // declare all the variables
    int flowrate;
 
    // prompt the user & get their input
    cout << "What is the flowrate of Boulder Creek?" << endl;
    cin >> flowrate;
 
    // input validation: flowrate must be positive
    if (flowrate <= 0) // EDIT THIS LINE
    {
        cout << "Please enter a valid input." << endl; //statement for invalid input
        return 0;
    }
 
    // decide if it's safe based on flowrate
    if (flowrate <= 250) // EDIT THIS LINE
    {
        cout << "It is safe to go tubing. Have fun!" << endl; //statement for safety
    }
    else
    {
        cout << "The river is flowing too fast to go tubing." << endl; //statement for danger
    }
 
    return 0;
}