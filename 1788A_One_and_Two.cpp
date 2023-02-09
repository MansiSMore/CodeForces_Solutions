/*
A. One and Two
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a sequence 𝑎1,𝑎2,…,𝑎𝑛. Each element of 𝑎 is 1 or 2.

Find out if an integer 𝑘 exists so that the following conditions are met. 
1≤𝑘≤𝑛−1, and 𝑎1⋅𝑎2⋅…⋅𝑎𝑘=𝑎𝑘+1⋅𝑎𝑘+2⋅…⋅𝑎𝑛.
If there exist multiple 𝑘 that satisfy the given condition, print the smallest.

Input:
Each test contains multiple test cases. 
The first line contains the number of test cases 𝑡 (1≤𝑡≤100). 
Description of the test cases follows.
The first line of each test case contains one integer 𝑛 (2≤𝑛≤1000).
The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤2).

Output:
For each test case, if there is no such 𝑘, print −1.
Otherwise, print the smallest possible 𝑘.

Example:
inputCopy:
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
outputCopy:
2
-1
1

Note:
For the first test case, 𝑘=2 satisfies the condition since 𝑎1⋅𝑎2=𝑎3⋅𝑎4⋅𝑎5⋅𝑎6=4. 
𝑘=3 also satisfies the given condition, but the smallest should be printed.
For the second test case, there is no 𝑘 that satisfies 𝑎1⋅𝑎2⋅…⋅𝑎𝑘=𝑎𝑘+1⋅𝑎𝑘+2⋅…⋅𝑎𝑛
For the third test case, 𝑘=1, 2, and 3 satisfy the given condition, so the answer is 1.
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

ll digSum(ll num)
{
    ll sum = 0;
    while(num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    ll T_testcases = 0;
    cin >> T_testcases;
    
    while (T_testcases--)
    {
        ll n;
        cin >> n;

        if(n % 2 == 0)
        {
            ll x = n / 2 - 1;
            ll y = n / 2 + 1;

            ll s1 = digSum(x), s2 = digSum(y);
            while(s1 != s2)
            {
                if(abs(s1-s2) <= 1)
                {
                    
                    break;
                }
                x--;
                y++;
                s1 = digSum(x), s2 = digSum(y);
            }

            cout << x << " " << y << endl;
        }
        else
        {
            cout << n/2 << " " << (n/2) + 1 << endl;
        }
    }
    return 0;
}