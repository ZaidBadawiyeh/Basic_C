#include <iostream>
using namespace std;


int main ()
{
int department;
int classType;
int section;

cout << "Select a department: (1)Computer Science (2)Math (3)Science" << endl;
cin >> department, classType, section;
if (department == 1)
    {
    cout << "Select a class: (1)Starting Computing (2)Data Structures (3)Algorithms" << endl;
    cin >> classType;
    if (classType == 1)
    {
        cout << "Select a section: (1)Section 100 (2)Section 200" << endl;
            cin >> section;
        if (section == 1)
            {
            
                cout << "You've been enrolled in Section 100 of Starting Computing!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 200 of Starting Computing!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else if (classType == 2)
    {
        cout << "Select a section: (1)Section 101 (2)Section 201" << endl;
            cin >> section;
            if (section == 1)
            {
                cout << "You've been enrolled in Section 101 of Data Structures!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 201 of Data Structures!";
            }
    else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else if (classType == 3)
    {
        
        cout << "Select a section: (1)Section 102 (2)Section 202" << endl;
            cin >> section;
        if (section == 1)
            {
            
                cout << "You've been enrolled in Section 102 of Algorithms!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 202 of Algorithms!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else
    {
        cout << "Please enter a valid input.";
    }
    }
    
else if (department == 2)
{
    cout << "Select a class: (1)Calculus 1 (2)Calculus 2 (3)Linear Algebra" << endl;
    cin >> classType;
     if (classType == 1)
    {
        cout << "Select a section: (1)Section 400 (2)Section 500" << endl;
            cin >> section;
        if (section == 1)
            {
            
                cout << "You've been enrolled in Section 400 of Calculus 1!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 500 of Calculus 1!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else if (classType == 2)
    {
        cout << "Select a section: (1)Section 401 (2)Section 501" << endl;
            cin >> section;
            if (section == 1)
            {
                cout << "You've been enrolled in Section 401 of Calculus 2!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 501 of Calculus 2!";
            }
    else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else if (classType == 3)
    {
        
        cout << "Select a section: (1)Section 402 (2)Section 502" << endl;
            cin >> section;
        if (section == 1)
            {
            
                cout << "You've been enrolled in Section 402 of Linear Algebra!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 502 of Linear Algebra!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else
    {
        cout << "Please enter a valid input.";
    }
}

else if (department == 3)
{
    cout << "Select a class: (1)General Chemistry 1 (2)Physics 1" << endl;
    cin >> classType;
    if (classType == 1)
    {
        cout << "Select a section: (1)Section 700 (2)Section 800" << endl;
            cin >> section;
        if (section == 1)
            {
            
                cout << "You've been enrolled in Section 700 of General Chemistry 1!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 800 of General Chemistry 1!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else if (classType == 2)
    {
        cout << "Select a section: (1)Section 701 (2)Section 801" << endl;
            cin >> section;
            if (section == 1)
            {
                cout << "You've been enrolled in Section 701 of Physics 1!";
            }
            else if (section == 2)
            {
                cout << "You've been enrolled in Section 801 of Physics 1!";
            }
            else
            {
                 cout << "Please enter a valid input.";
            }
    }
    else
    {
        cout << "Please enter a valid input.";
    }
}
else
{
    cout << "Please enter a valid input." << endl;
}
}

