/*
A. Doremy's Paint
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Doremy has 𝑛 buckets of paint which is represented by an array 𝑎 of length 𝑛. Bucket 𝑖 contains paint with color 𝑎𝑖.

Let 𝑐(𝑙,𝑟) be the number of distinct elements in the subarray [𝑎𝑙,𝑎𝑙+1,…,𝑎𝑟]. Choose 2 integers 𝑙 and 𝑟 such that 𝑙≤𝑟 and 𝑟−𝑙−𝑐(𝑙,𝑟) is maximized.

Input
The input consists of multiple test cases. The first line contains a single integer 𝑡 (1≤𝑡≤104)  — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (1≤𝑛≤105) — the length of the array 𝑎.

The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤𝑛).

It is guaranteed that the sum of 𝑛 does not exceed 105.

Output
For each test case, output 𝑙 and 𝑟 such that 𝑙≤𝑟 and 𝑟−𝑙−𝑐(𝑙,𝑟) is maximized.

If there are multiple solutions, you may output any.

Example
inputCopy
7
5
1 3 2 2 4
5
1 2 3 4 5
4
2 1 2 1
3
2 3 3
2
2 2
1
1
9
9 8 5 2 1 1 2 3 3
outputCopy
2 4
1 5
1 4
2 3
1 2
1 1
3 9
Note
In the first test case, 𝑎=[1,3,2,2,4].

When 𝑙=1 and 𝑟=3, 𝑐(𝑙,𝑟)=3 (there are 3 distinct elements in [1,3,2]).
When 𝑙=2 and 𝑟=4, 𝑐(𝑙,𝑟)=2 (there are 2 distinct elements in [3,2,2]).
It can be shown that choosing 𝑙=2 and 𝑟=4 maximizes the value of 𝑟−𝑙−𝑐(𝑙,𝑟) at 0.

For the second test case, 𝑎=[1,2,3,4,5].

When 𝑙=1 and 𝑟=5, 𝑐(𝑙,𝑟)=5 (there are 5 distinct elements in [1,2,3,4,5]).
When 𝑙=3 and 𝑟=3, 𝑐(𝑙,𝑟)=1 (there is 1 distinct element in [3]).
It can be shown that choosing 𝑙=1 and 𝑟=5 maximizes the value of 𝑟−𝑙−𝑐(𝑙,𝑟) at −1. Choosing 𝑙=3 and 𝑟=3 is also acceptable.

*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    long long int T_testcases = 0;
    cin >> T_testcases;
    while (T_testcases--)
    {
        long long int left = 0, right = 0, N = 0;
        cin >> N;

        unordered_map<int,int> mobj;
        vector<int> vobj(N);

        for(int i = 0; i < N; ++i)
        {
            cin >> vobj[i];
            mobj[vobj[i]]++;
        }

        for(int i = 0; i < N; ++i)
        {
            if(mobj[vobj[i]] > 1)
            {
                left = i;
                break;
            }
        }
        
        for(int i = N - 1; i >= 0; --i)
        {
            if(mobj[vobj[i]] > 1)
            {
                right = i;
                break;
            }
        }
        cout << (left + 1) << " " << (right + 1) <<endl;
    }
    

    return 0;
}