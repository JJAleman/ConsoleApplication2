// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string dogName1 = "Kiana";
    string dogName2 = "Kaiser";
    string dogBreed1 = "Weimaraner";
    string dogBreed2 = "Chihuahua";
    int dogAge1 = 9;
    int dogAge2 = 13; 

    cout << "I have two dogs.\n";
    cout << "The " << dogBreed1 << " is " << dogAge1 << " years old and her name is " << dogName1 << ".\n";
    cout << dogName2 << " is a " << dogBreed2 << " and he is " << dogAge2 << " years old.\n";
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
