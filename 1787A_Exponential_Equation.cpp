/*
A. Exponential Equation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an integer 𝑛.

Find any pair of integers (𝑥,𝑦)(1≤𝑥,𝑦≤𝑛) such that 𝑥𝑦⋅𝑦+𝑦𝑥⋅𝑥=𝑛.

Input:
The first line contains a single integer 𝑡(1≤𝑡≤104) — the number of test cases.
Each test case contains one line with a single integer 𝑛(1≤𝑛≤109).

Output:
For each test case, if possible, print two integers 𝑥 and 𝑦 (1≤𝑥,𝑦≤𝑛). If there are multiple answers, print any.
Otherwise, print −1.

Example:
inputCopy:
5
3
7
42
31250
20732790
outputCopy:
-1
-1
2 3
5 5
3 13
Note:
In the third test case, 23⋅3+32⋅2=42, so (2,3),(3,2) will be considered as legal solutions.

In the fourth test case, 55⋅5+55⋅5=31250, so (5,5) is a legal solution.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long

using namespace std;

int main()
{
    ll T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        ll n = 0;
        cin >> n;

        if(n % 2 == 1)
        {
            cout << - 1 << endl;
        }
        else
        {
            cout << 1 << " " << (n / 2) << endl;
        }
    }
    return 0;
}