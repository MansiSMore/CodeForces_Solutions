/*
C. Prepend and Append
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Timur initially had a binary string† 𝑠(possibly of length 0). 
He performed the following operation several (possibly zero) times:
Add 𝟶 to one end of the string and 𝟷 to the other end of the string. 
For example, starting from the string 𝟷𝟶𝟷𝟷, you can obtain either 𝟶𝟷𝟶𝟷𝟷𝟷 or 𝟷𝟷𝟶𝟷𝟷𝟶.
You are given Timur's final string. What is the length of the shortest possible string he could have started with?

A binary string is a string (possibly the empty string) whose characters are either 𝟶 or 𝟷.

Input:
The first line of the input contains an integer 𝑡(1≤𝑡≤100) — the number of testcases.
The first line of each test case contains an integer 𝑛(1≤𝑛≤2000) — the length of Timur's final string.
The second line of each test case contains a string 𝑠 of length 𝑛 consisting of characters 𝟶 or 𝟷, denoting the final string.

Output:
For each test case, output a single nonnegative integer — the shortest possible length of Timur's original string. Note that Timur's original string could have been empty, in which case you should output 0.

Example:
inputCopy:
9
3
100
4
0111
5
10101
6
101010
7
1010110
1
1
2
10
2
11
10
1011011010
outputCopy:
1
2
5
0
3
1
0
2
4

Note:
In the first test case, the shortest possible string Timur started with is 𝟶
, and he performed the following operation: 𝟶→𝟷𝟶𝟶
.

In the second test case, the shortest possible string Timur started with is 𝟷𝟷
, and he performed the following operation: 𝟷𝟷→𝟶𝟷𝟷𝟷
.

In the third test case, the shortest possible string Timur started with is 𝟷𝟶𝟷𝟶𝟷
, and he didn't perform any operations.

In the fourth test case, the shortest possible string Timur started with is the empty string (which we denote by 𝜀
), and he performed the following operations: 𝜀→𝟷𝟶→𝟶𝟷𝟶𝟷→𝟷𝟶𝟷𝟶𝟷𝟶
.

In the fifth test case, the shortest possible string Timur started with is 𝟷𝟶𝟷
, and he performed the following operations: 𝟷𝟶𝟷→𝟶𝟷𝟶𝟷𝟷→𝟷𝟶𝟷𝟶𝟷𝟷𝟶
.

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
        int n = 0;
        cin >> n;
        
        string str;
        cin >> str;

        int i = 0, cnt = 0, j = n - 1;

        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        while(i < j)
        {
            if(str[i] != str[j])
            {
                i++, j--;
                cnt += 2;
            }
            else{
                break;
            }
        }
        cout << n - cnt << endl;

    }   
    return 0;
}