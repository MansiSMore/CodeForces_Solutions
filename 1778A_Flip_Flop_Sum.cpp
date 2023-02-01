/*
A. Flip Flop Sum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array of 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛. The integers are either 1 or −1. 
You have to perform the following operation exactly once on the array 𝑎:

Choose an index 𝑖(1≤𝑖<𝑛) and flip the signs of 𝑎𝑖 and 𝑎𝑖+1. Here, flipping the sign means −1 will be 1 and 1 will be −1.
What is the maximum possible value of 𝑎1+𝑎2+…+𝑎𝑛 after applying the above operation?

Input:
Each test contains multiple test cases. The first line contains the number of test cases 𝑡(1≤𝑡≤500). Description of the test cases follows.
The first line of each test case contains a single integer 𝑛(2≤𝑛≤105), the length of the array 𝑎.
The next line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛(𝑎𝑖=1 or 𝑎𝑖=−1).

The sum of 𝑛 over all cases doesn't exceed 105.

Output:
For each test case, print the maximum possible sum of the array 𝑎 you can get in a separate line.

Example:
inputCopy:
4
5
-1 1 1 -1 -1
5
1 1 -1 -1 -1
2
1 1
4
1 -1 -1 1
outputCopy:
3
3
-2
4
Note:
In the first case, we can choose index 4 and flip the signs of 𝑎4 and 𝑎5. 
After this operation, the sum will be −1+1+1+1+1=3. We can't make the sum larger than this.
In the third case, the only option is to choose the index 1.
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

        ll arr[n];
        ll ans = 0;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += arr[i];
        }

        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i] == -1 && arr[i + 1] == -1)
            {
                ans += 4;
                flag = true;
                break;
            }
        }
        if(flag == true)
            cout << ans << endl;
        else
        {
            if(ans != n)
            {
                cout << ans << endl;
            }
            else{
                cout << ans - 4 << endl;
            }
        }
    }
    return 0;
}