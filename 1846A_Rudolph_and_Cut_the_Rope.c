/*
A. Rudolph and Cut the Rope
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are 𝑛 nails driven into the wall, the 𝑖-th nail is driven 𝑎𝑖 meters above the ground, one end of the 𝑏𝑖 meters long rope is tied to it. All nails hang at different heights one above the other. One candy is tied to all ropes at once. Candy is tied to end of a rope that is not tied to a nail.
To take the candy, you need to lower it to the ground. To do this, Rudolph can cut some ropes, one at a time. Help Rudolph find the minimum number of ropes that must be cut to get the candy.
The figure shows an example of the first test:

Input:
The first line contains one integer 𝑡(1≤𝑡≤104) — the number of test cases.
The first line of each test case contains one integer 𝑛(1≤𝑛≤50) — the number of nails.
The 𝑖-th of the next 𝑛 lines contains two integers 𝑎𝑖 and 𝑏𝑖(1≤𝑎𝑖,𝑏𝑖≤200) — the height of the 𝑖-th nail and the length of the rope tied to it, all 𝑎𝑖 are different.
It is guaranteed that the data is not contradictory, it is possible to build a configuration described in the statement.

Output:
For each test case print one integer — the minimum number of ropes that need to be cut to make the candy fall to the ground.

Example:
inputCopy:
4
3
4 3
3 1
1 2
4
9 2
5 2
7 7
3 4
5
11 7
5 10
12 9
3 2
1 5
3
5 6
4 5
7 7
outputCopy:
2
2
3
0
*/
#include <iostream>

using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        int N_nails = 0, cnt = 0;
        cin >> N_nails;
        
        for(int i = 0; i < N_nails; i++)
        {
            int a_height = 0, b_length = 0;
            cin >> a_height >> b_length;
            
            if(b_length < a_height)
            {
                //cout << a_height << b_length << "ii\n";
                cnt++;
            }
        }
        
        cout << cnt << endl;
    }

    return 0;
}
