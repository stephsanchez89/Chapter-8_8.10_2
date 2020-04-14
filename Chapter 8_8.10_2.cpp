// Chapter 8_8.10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int number = 0;
    int counter = 1;
    int product = 1;

    cout << "Enter integer for the factorial. The range must be between 2 and 25: ";
    cin >> number;

    if (number <= 25 && number >= 2)
    {
        while (counter <= number)
        {
            product = counter * product;
            counter++;
        }

        cout << "The factorial for the number: " << number << " is: " << product << endl;
    }
   
    else
    {
        cout << "number not within range. " << endl;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
