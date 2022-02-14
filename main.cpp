// fixPointIteration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

float function1(float xn)
{
    return (xn = sqrtf(3 * xn - 1));
}

float function2(float xn)
{
    return (xn = (-1 / (xn - 3)));
}

float function3(float xn)
{
    return (xn = ((3 * xn - 1) / xn));
}

float solveViaIteration(float x)
{
    float currentX = x;
    cout << "Solving for (xn = sqrtf(3 * xn - 1)) for x_1: " << x << endl;
    for (int i = 0;; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        float nextX = function1(currentX);
        if (abs(currentX - nextX) < 1E-5)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << " with a value of " << setprecision(5) << currentX << endl;
            break;
        }
        currentX = nextX;
    }

    cout << "Solving for (xn = (-1 / (xn - 3))) for x_1: " << x << endl;
    currentX = x;
    for (int i = 0;; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        float nextX = function2(currentX);
        if (abs(currentX - nextX) < 1E-5)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << " with a value of " << setprecision(5) << currentX << endl;
            break;
        }
        currentX = nextX;
    }
    cout << "Solving for (xn = ((3 * xn - 1) / xn)) for x_1: " << x << endl;
    currentX = x;
    for (int i = 0;; i++)
    {
        cout << "Iteration: " << i << " Value: " << currentX << endl;
        float nextX = function3(currentX);
        if (abs(currentX - nextX) < 1E-5)
        {
            cout << "Fixed Point Iteration complete at iteration: " << i << endl;
            cout << " with a value of " << setprecision(5) << currentX << endl;
            return currentX;
        }
        currentX = nextX;
    }
}

int main()
{
    float x = 0;
    cout << "Enter x_1: ";
    cin >> x;
    solveViaIteration(x);

    return 0;
}
