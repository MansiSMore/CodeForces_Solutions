/*
A. Three Doors
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are three doors in front of you, numbered from 1 to 3 from left to right. Each door has a lock on it, which can only be opened with a key with the same number on it as the number on the door.
There are three keys — one for each door. Two of them are hidden behind the doors, so that there is no more than one key behind each door. So two doors have one key behind them, one door doesn't have a key behind it. To obtain a key hidden behind a door, you should first unlock that door. The remaining key is in your hands.
Can you open all the doors?

Input :
The first line contains a single integer 𝑡 (1≤𝑡≤18) — the number of testcases.
The first line of each testcase contains a single integer 𝑥 (1≤𝑥≤3) — the number on the key in your hands.
The second line contains three integers 𝑎,𝑏 and 𝑐 (0≤𝑎,𝑏,𝑐≤3) — the number on the key behind each of the doors. If there is no key behind the door, the number is equal to 0.
Values 1,2 and 3 appear exactly once among 𝑥,𝑎,𝑏 and 𝑐.

Output :
For each testcase, print "YES" if you can open all the doors. Otherwise, print "NO".

Example :
inputCopy :
4
3
0 1 2
1
0 3 2
2
3 1 0
2
1 3 0

outputCopy :
YES
NO
YES
NO
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while(t--)
    {
        int x = 0, a = 0, b = 0, c = 0, cnt = 0;
        cin >> x;
        cin >> a >> b >> c;
        vector<int> vobj = {a, b, c};

        x = vobj[x - 1];
        while(x != 0)
        {
            x = vobj[x - 1];
            cnt++;
        }
        if(cnt == 2)
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