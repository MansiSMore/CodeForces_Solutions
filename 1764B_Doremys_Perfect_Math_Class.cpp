/*
B. Doremy's Perfect Math Class
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
"Everybody! Doremy's Perfect Math Class is about to start! Come and do your best if you want to have as much IQ as me!" In today's math class, Doremy is teaching everyone subtraction. Now she gives you a quiz to prove that you are paying attention in class.

You are given a set 𝑆 containing positive integers. You may perform the following operation some (possibly zero) number of times:

choose two integers 𝑥 and 𝑦 from the set 𝑆 such that 𝑥>𝑦 and 𝑥−𝑦 is not in the set 𝑆.
add 𝑥−𝑦 into the set 𝑆.
You need to tell Doremy the maximum possible number of integers in 𝑆 if the operations are performed optimally. It can be proven that this number is finite.

Input
The input consists of multiple test cases. The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of test cases. The description of the test cases follows.
The first line contains an integer 𝑛 (2≤𝑛≤105) — the size of the set 𝑆.
The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎1<𝑎2<⋯<𝑎𝑛≤109) — the positive integers in 𝑆.
It is guaranteed that the sum of 𝑛 over all test cases does not exceed 2⋅105.

Output
For each test case, you need to output the maximum possible number of integers in 𝑆. It can be proven that this value is finite.

Example
inputCopy
2
2
1 2
3
5 10 25
outputCopy
2
5
Note
In the first test case, no such 𝑥 and 𝑦 exist. The maximum possible number of integers in 𝑆 is 2.

In the second test case,

𝑆={5,10,25} at first. You can choose 𝑥=25, 𝑦=10, then add 𝑥−𝑦=15 to the set.
𝑆={5,10,15,25} now. You can choose 𝑥=25, 𝑦=5, then add 𝑥−𝑦=20 to the set.
𝑆={5,10,15,20,25} now. You can not perform any operation now.
After performing all operations, the number of integers in 𝑆 is 5. It can be proven that no other sequence of operations allows 𝑆 to contain more than 5 integers.
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
        int N = 0, gcd_of_array = 0;
        cin >> N;

        vector<int> vobj(N);

        for(int i = 0; i < N; ++i)
        {
            cin >> vobj[i];
            gcd_of_array = __gcd(gcd_of_array, vobj[i]);
        }

        cout << vobj[N - 1] / gcd_of_array << endl;
    }

    return 0;
}