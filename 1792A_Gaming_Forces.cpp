/*
A. GamingForces
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Monocarp is playing a computer game. He's going to kill 𝑛 monsters, the 𝑖-th of them has ℎ𝑖 health.
Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:
choose exactly two alive monsters and decrease their health by 1;
choose a single monster and kill it.
When a monster's health becomes 0, it dies.

What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?

Input:
The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of testcases.
The first line of each testcase contains a single integer 𝑛(1≤𝑛≤100) — the number of monsters.
The second line contains 𝑛 integers ℎ1,ℎ2,…,ℎ𝑛(1≤ℎ𝑖≤100) — the health of each monster.
The sum of 𝑛 over all testcases doesn't exceed 2⋅104.

Output:
For each testcase, print a single integer — the minimum number of spell casts Monocarp should perform in order to kill all monsters.

Example:
inputCopy:
3
4
1 2 1 2
3
2 4 2
5
1 2 3 4 5

outputCopy:
3
3
5

Note:
In the first testcase, the initial health list is [1,2,1,2]. Three spells are casted:
the first spell on monsters 1 and 2 — monster 1 dies, monster 2 has now health 1, new health list is [0,1,1,2];
the first spell on monsters 3 and 4 — monster 3 dies, monster 4 has now health 1, new health list is [0,1,0,1];
the first spell on monsters 2 and 4 — both monsters 2 and 4 die.

In the second testcase, the initial health list is [2,4,2]. Three spells are casted:

the first spell on monsters 1 and 3 — both monsters have health 1 now, new health list is [1,4,1];
the second spell on monster 2 — monster 2 dies, new health list is [1,0,1];
the first spell on monsters 1 and 3 — both monsters 1 and 3 die.

In the third testcase, the initial health list is [1,2,3,4,5]. Five spells are casted. The 𝑖-th of them kills the 𝑖-th monster with the second spell. Health list sequence: [1,2,3,4,5]
 →
 [0,2,3,4,5]
 →
 [0,0,3,4,5]
 →
 [0,0,0,4,5]
 →
 [0,0,0,0,5]
 →
 [0,0,0,0,0]
.

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
        int N = 0, ones = 0;
        cin >> N;

        vector<int> vobj(N, 0);

        for(int i = 0; i < N; ++i)
        {
            cin >> vobj[i];
            if(vobj[i] == 1)
            {
                ones++;
            }
        }
        int ans = 0, temp = 0;
        if(ones % 2 == 0)
            {
                temp = ones / 2;
            }
            else{
                temp = ones / 2 + 1;
            }

            ans = temp + (N - ones);
        int res = min(ans, N);
        cout << res << endl;
    }
    return 0;
}