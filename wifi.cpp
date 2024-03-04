#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double a;
    double b;
    double c;
    
cout << "Enter wifi speeds over the last 3 classes:" << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  if (a<0 || b<0 || c<0)
  {
      cout << "Please enter a valid input." << endl;
  }
  else 
  {
      if (a>b && b>c)
      cout << "The wifi is getting slower!";
      else {
          if (c>b && b>a)
          cout << "The wifi is getting faster!";
          else {
              cout << "The wifi speed is changing unpredictably.";
          }
      }
  }
    
}