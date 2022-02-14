// fixPointIteration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>


//#include <studio.h>

using namespace std;

float function1Iteration(int x1)
{
    return (x1 = sqrtf(3 * x1 - 1));
}

float solveViaIteration()
{
    float currentX = 1;
    for (int i = 0; ; i++)
    {
        cout << "Iteration: " << i << "Value: "
    }
}

int main()
{
    // equations solves for f(x) = 1 
    float x1 = 1;
    float xn = 0;
    float ans1 = 0;
    
 
    //cout << "Solving equations for f(x) = 1\n";
    //cout << "x = sqrtf(3 * x - 1)\n";

    ans1 = (x1 = sqrtf(3 * x1 - 1));
    printf("Answer %.4f \n", ans1);




    //x1 = 1;
    //ans1 = (x1 = (-1 / (x1 - 3)));
    //cout << "x = (-1 / (x - 3))\n";
    //printf("Answer %.4f \n", ans1);
    //x1 = 1;
    //ans1 = (x1 = ((3 * x1 - 1) / x1));
    //cout << "x = ((3 * x - 1) / x)\n";
    //printf("Answer %.4f \n", ans1);
    //cout << endl;

    //// equations solves for f(x) = 4
    //x1 = 4;
    //cout << "Solving equations for f(x) = 4\n";
    //cout << "x = sqrtf(3 * x - 1)\n";
    //ans1 = (x1 = sqrtf(3 * x1 - 1));
    //printf("Answer %.4f \n", ans1);
    //x1 = 4;
    //ans1 = (x1 = (-1 / (x1 - 3)));
    //cout << "x = (-1 / (x - 3))\n";
    //printf("Answer %.4f \n", ans1);
    //x1 = 4;
    //ans1 = (x1 = ((3 * x1 - 1) / x1));
    //cout << "x = ((3 * x - 1) / x)\n";
    //printf("Answer %.4f \n", ans1);
    //cout << endl;

    //Old stuff
    //ans = sqrt(((x2 * x1) - 1))/1;
    //ans = (sqrt(x2) - sqrt(1));
    //printf("%.4f \n", ans1);
    //printf("%.4f = sqrt(%4f * %4f - %4f \n", x1, x1 = sqrt(3 * x1 - 1));
    //cout << setprecision(5) << x1 << '\n';

    return 0;
}
