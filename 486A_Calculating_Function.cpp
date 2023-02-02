/*
A. Calculating Function
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
For a positive integer n let's define a function f:
f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input:
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output:
Print f(n) in a single line.

Examples:
inputCopy:
4
outputCopy:
2

inputCopy:
5
outputCopy:
-3

Note:
f(4) =  - 1 + 2 - 3 + 4 = 2
f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n = 0;
    cin >> n;

    if(n % 2 == 0)
        cout << n / 2 << endl;
    else
        cout << -((n + 1) / 2) << endl; 
    return 0;
}