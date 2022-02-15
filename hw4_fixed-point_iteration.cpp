// fixPointIteration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jason Jones 
//#015437682 
//2/15/22 
//cs 3010 Numerical methods 
//Professor Navi, Cal Poly Pomona 


// This program demonstraits the Fixed-Point iteration method 
// We use the iteration method in order to converge fixed point of the function.
// Bring an x to one side then use x_n+1 = f(x_n) n = 0,1,2,... to solve by iteration. 
// which gives rise to the sequence x_0, x_1, x_2,... which is hoped to converge to a point x. 
// If f is continuous, then one can prove that the obtainedx is a fixed point of f.
// 

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

double function1(double xn)
{
    return (xn = sqrtf(3 * xn - 1));
}

double function2(double xn)
{
    return (xn = (-1 / (xn - 3)));
}

double function3(double xn)
{
    return (xn = ((3 * xn - 1) / xn));
}

double solveViaIteration(double x)
{
    double currentX = x;
    cout << "Solving for (xn = sqrtf(3 * xn - 1)) for x_1: " << x << endl;
    for (int i = 1; ; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        double nextX = function1(currentX);
        if (abs(currentX - nextX) < .1E-4)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << "with a value of " << fixed << setprecision(4) << currentX << endl;
            break;
        }
        currentX = nextX;
    }

    cout << "Solving for (xn = (-1 / (xn - 3))) for x_1: " << x << endl;
    currentX = x;
    for (int i = 1; ; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        double nextX = function2(currentX);
        if (abs(currentX - nextX) < .1E-4)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << "with a value of " << fixed << setprecision(5) << currentX << endl;
            break;
        }
        currentX = nextX;
    }
    cout << "Solving for (xn = ((3 * xn - 1) / xn)) for x_1: " << x << endl;
    currentX = x;
    for (int i = 1; ; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        double nextX = function3(currentX);
        if (abs(currentX - nextX) < .1E-4)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << "with a value of " << fixed << setprecision(5) << currentX << endl;
            return currentX;
        }
        currentX = nextX;
    }
}

int main()
{
    char choice;
    cout << "Fixed point iteration for an equation simplified differently: \n"
        "x^2 - 3x + 1 = 0 -> x = sqrt(3x - 1)\n"
        "x^2 - 3x + 1 = 0 -> x = -1/(x-3)\n"
        "x^2 - 3x + 1 = 0 -> x = (3x - 1)/x" << endl;

    while(true)
    {
        cout << "Would you like to make a calculation? (y/n)" << endl;
        cin >> choice;
        if (choice == 'N' || choice == 'n') { break; }
        double x = 0;
        cout << "Enter x_1: ";
        cin >> x;
        solveViaIteration(x);
        cout << "\n\n\n";
    }
    return 0;
}