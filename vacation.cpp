#include <iostream>
 
using namespace std;
 
int main()
{
    double userBudget = 0; //initializing budget
    char travelType; //initializing travel type
   
    cout << "What is your budget?" << endl; //asking for user budget
    cin >> userBudget; //input for user budget
   
    if (userBudget < 0) //if statement for invalid inputs
        {
        cout << "Please enter a valid input." << endl; //invalid input statement for invalid statements
        return 0;
    }
   
    cout << "What mode of transportation would you like to take (B, T, or A)?" << endl; //asking for mode of perferred transportation
    cin >> travelType;
   
    switch(travelType) //switch statement for each travel type
    {
        case 'B': //bus case
        if(userBudget >= 175.25) //establishing minimium bus price
        {
            cout << "Yes, this vacation is within your budget!" << endl; //statement for affordable price
        }
        else
        {
            cout << "Sorry, this vacation is outside your budget." << endl; //statement for if budget input is too low
        }
        break;
        case 'T': //train case
        if(userBudget >= 240.66) //establishing minimum train price
        {
            cout << "Yes, this vacation is within your budget!" << endl; //statement for affordable price
        }
        else
        {
            cout << "Sorry, this vacation is outside your budget." << endl; //statement for if budget input is too low
        }
        break;
        case 'A': //airplance case
        if(userBudget >= 350.93) //establishing minimum plane price
        {
            cout << "Yes, this vacation is within your budget!" << endl; //statement for affordable price
        }
        else
        {
            cout << "Sorry, this vacation is outside your budget." << endl; //statement for if budget input is too low
        }
        break;
    default:
    cout << "Please enter a valid input." << endl; //default statement for invalid transportation type
    }
    return 0;
   
}