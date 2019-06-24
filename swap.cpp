//
// Created by Gang-Ryung Uh on 2019-06-24.
//
// This program takes two values from the user and then swaps them before printing the values
// The user will be prompted to enter both numbers

#include <iostream>
using namespace std;

// define a function prototype for my_swap
void my_swap(float&, float&);

int main()
{
    float first;
    float second;

    // prompt user to enter the number
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> first;

    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> second;

    // Echo print the input
    cout << endl << "You input the numbers as " << first << " and "
         << second << endl;

    //Now we will call the function swap
    my_swap(first,second);

    //Output the values
    cout << "After swapping, the first number has the value of " << first
         << " which was the value of the second number." << endl
         << "The second number has the value of " << second
         << " which was the value of the first number." << endl;

    return 0;
}

//**********************************************************************
//                          my_swap
//
// task:     to swap two numbers
// data in:  two numbers to swap
// data out: the two numbers received with their values swapped
//
//***********************************************************************

// define the function my_swap below.
void my_swap(float &a, float &b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
    return;
}