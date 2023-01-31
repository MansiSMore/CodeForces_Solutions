/*
A. Add Plus Minus Sign
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
AquaMoon has a string 𝑎 consisting of only 0 and 1. She wants to add + and − between all pairs of consecutive positions to make the absolute value of the resulting expression as small as possible. Can you help her?

Input:
The first line contains a single integer 𝑡 (1≤𝑡≤2000) – the number of test cases. The description of test cases follows.
The first line of each test case contains a single integer 𝑛(2≤𝑛≤100) — the length of 𝑎.
The second line of each test case contains a string 𝑎 of length 𝑛, consisting of only 0 and 1.

Output:
For each test case, output a string of length 𝑛−1 consisting of − and + on a separate line. If there is more than one assignment of signs that produces the smallest possible absolute value, any of them is accepted.

Example:
inputCopy:
3
2
11
5
01101
5
10001
outputCopy:
-
+-++
+++-
Note
In the first test case, we can get the expression 1−1=0, with absolute value 0.

In the second test case, we can get the expression 0+1−1+0+1=1, with absolute value 1.

In the third test case, we can get the expression 1+0+0+0−1=0, with absolute value 0.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        int N = 0;
        cin >> N;

        string str;
        cin >> str;

        int ans = 0;
        if(str[0] == '1')
        {
            ans = 1;
        }
        for(int i = 1; i < N; i++)
        {
            if(str[i] == '1' && ans != 0)
            {
                cout << "-";
                ans--;
            }
            else if(str[i] == '1' && ans == 0)
            {
                cout << "+";
                ans++;
            }
            else{
                cout << "-";
            }
        }
        cout << endl;

    }
    return 0;
} 