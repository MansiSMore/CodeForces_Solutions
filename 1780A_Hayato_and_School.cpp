/*
A. Hayato and School
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Today Hayato came home from school with homework.
In the assignment, Hayato was given an array 𝑎 of length 𝑛. The task was to find 3 numbers in this array whose sum is odd. At school, he claimed that there are such 3 numbers, but Hayato was not sure, so he asked you for help.
Answer if there are such three numbers, and if so, output indices 𝑖, 𝑗, and 𝑘 such that 𝑎𝑖+𝑎𝑗+𝑎𝑘 is odd.

The odd numbers are integers that are not divisible by 2: 1, 3, 5, and so on.

Input:
The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of test cases.
For each test case, the first line contains one integer 𝑛(3≤𝑛≤300) — the length of 𝑎.

The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤105) — the array 𝑎.

It is guaranteed that the sum of 𝑛 over all test cases does not exceed 2⋅105.

Output:
For each test case, in the first line print one word "YES" (without quotes) if there are 3 numbers with an odd sum or "NO" (without quotes) if there are no such 3 numbers.

If the answer exists, then on the second line print 3 distinct integers 𝑖,𝑗,𝑘(1≤𝑖,𝑗,𝑘≤𝑛) — the indices of the numbers. If there are several answers, output any.

Example:
inputCopy:
6
3
1 1 1
4
1 1 2 2
3
1 2 3
5
1 4 5 1 2
4
2 6 2 4
5
5 6 3 2 1

outputCopy:
YES
1 2 3
YES
3 4 1
NO
YES
1 3 4
NO
YES
1 3 5

Note:
In the first test case, there is one way to choose 3 numbers, and since 1+1+1=3, this triple is fine for us.

In the second test case, you need to choose the numbers 1,2,2, since 1+2+2=5.

In the third test case, there is one way to choose three numbers, but 1+2+3=6 is an even number, so the required triple does not exist.

In the fifth test case, no matter what three numbers we choose, their sum is even.
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

        int arr[N];
        vector<int> v1, v2;
        int ans = 0, i = 0;
        for(i = 0; i < N; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                v2.push_back(i + 1);
            }
            else{
                v1.push_back(i + 1);
            }
        }

        if(v1.size() >= 3)
        {
            cout << "YES\n" << v1[0] << " " << v1[1] << " " << v1[2] << endl;
        }
        else if(v1.size() >= 1 && v2.size() >= 2)
        {
            cout << "YES\n" << v1[0] << " " << v2[0] << " " << v2[1] << endl;
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
} 