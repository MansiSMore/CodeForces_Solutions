/*
A. Subtraction Game
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two positive integers, 𝑎 and 𝑏(𝑎<𝑏).

For some positive integer 𝑛, two players will play a game starting with a pile of 𝑛 stones. They take turns removing exactly 𝑎 or exactly 𝑏 stones from the pile. The player who is unable to make a move loses.
Find a positive integer 𝑛 such that the second player to move in this game has a winning strategy. This means that no matter what moves the first player makes, the second player can carefully choose their moves (possibly depending on the first player's moves) to ensure they win.

Input:
Each test contains multiple test cases. The first line contains the number of test cases 𝑡(1≤𝑡≤100). The description of the test cases follows.
The only line of each test case contains two integers, 𝑎 and 𝑏 (1≤𝑎<𝑏≤100).

Output:
For each test case, output any positive integer 𝑛(1≤𝑛≤106) such that the second player to move wins.
It can be proven that such an 𝑛 always exists under the constraints of the problem.

Example
inputCopy:
3
1 4
1 5
9 26
outputCopy:
2
6
3
Note:
In the first test case, when 𝑛=2, the first player must remove 𝑎=1 stone. Then, the second player can respond by removing 𝑎=1 stone. The first player can no longer make a move, so the second player wins.
In the second test case, when 𝑛=6, the first player has two options:
If they remove 𝑏=5 stones, then the second player can respond by removing 𝑎=1 stone. The first player can no longer make a move, so the second player wins.
If they remove 𝑎=1 stone, then the second player can respond by removing 𝑎=1 stone. Afterwards, the players can only alternate removing exactly 𝑎=1 stone. The second player will take the last stone and win.
Since the second player has a winning strategy no matter what the first player does, this is an acceptable output.
In the third test case, the first player cannot make any moves when 𝑛=3, so the second player immediately wins.
*/
#include <iostream>
using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;

    while(T_testcases--)
    {
        int a = 0, b = 0;
        cin >> a >> b;

        cout << a + b << endl;
    }
    return 0;
}