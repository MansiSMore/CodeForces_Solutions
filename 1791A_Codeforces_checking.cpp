/*
A. Codeforces Checking
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a lowercase Latin character (letter), check if it appears in the string 𝚌𝚘𝚍𝚎𝚏𝚘𝚛𝚌𝚎𝚜.

Input:
The first line of the input contains an integer 𝑡(1≤𝑡≤26) — the number of test cases.
The only line of each test case contains a character 𝑐 — a single lowercase Latin character (letter).

Output:
For each test case, output "YES" (without quotes) if 𝑐 satisfies the condition, and "NO" (without quotes) otherwise.
You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example:
inputCopy:
10
a
b
c
d
e
f
g
h
i
j
outputCopy:
NO
NO
YES
YES
YES
YES
NO
NO
NO
NO
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;

    while(T_testcases--)
    {
        char ch;
        cin >> ch;

        if(ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


   
    return 0;
}