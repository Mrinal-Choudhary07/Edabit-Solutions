/* This program will find remainder of two numbers
 * Problem :  https://edabit.com/challenge/bTrM8t39vjrAtYytA
 * Cateorgy - very easy
 * question category : math,numbers*/

#include <iostream>
#include <string>

using namespace std;

int remainder(int,int);

int main()
{
    int a = 3 , b = 4;

    int rem = remainder(a,b);

    cout << rem;
}

int remainder(int a , int b)
{
    return a % b;
}