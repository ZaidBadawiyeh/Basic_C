#include <iostream>

using namespace std;

int main() 
{
    double pizzaPrice = 0; 
    int numberToppings = 0;
    char pizzaSize;
    
    cout << "What size pizza would you like to order?" << endl;
    cin >> pizzaSize;
    
    switch(pizzaSize)
    {
    case 'S':
        cout << "How many toppings do you want?" << endl;
        cin >> numberToppings;
    if (numberToppings < 0)
    {
        cout << "Please enter a valid input." << endl;
    return 0;
    }
        pizzaPrice = 4.99 + (0.75 * numberToppings);
    break;
        
    case 'M':
        cout << "How many toppings do you want?" << endl;
        cin >> numberToppings;
    if (numberToppings < 0)
    {
        cout << "Please enter a valid input." << endl;
    return 0;
    }
        pizzaPrice = 5.99 + (1.50 * numberToppings);
    break;
        
    case 'L':
        cout << "How many toppings do you want?" << endl;
        cin >> numberToppings;
    if (numberToppings < 0)
    {
        cout << "Please enter a valid input." << endl;
    return 0;
    }
        pizzaPrice = 6.99 + (2.25 * numberToppings);
    break;
        
    default:
        cout << "Please enter a valid input." << endl;
        return 0;
    }
    
    cout << "Your total is $" << pizzaPrice;
    
}