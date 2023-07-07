/*
B. Rudolph and Tic-Tac-Toe
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Rudolph invented the game of tic-tac-toe for three players. It has classic rules, except for the third player who plays with pluses. Rudolf has a 3×3
 field  — the result of the completed game. Each field cell contains either a cross, or a nought, or a plus sign, or nothing. The game is won by the player who makes a horizontal, vertical or diagonal row of 3
's of their symbols.

Rudolph wants to find the result of the game. Either exactly one of the three players won or it ended in a draw. It is guaranteed that multiple players cannot win at the same time.

Input:
The first line contains one integer 𝑡(1≤𝑡≤104) — the number of test cases.
Each test case consists of three lines, each of which consists of three characters. The symbol can be one of four: "X" means a cross, "O" means a nought, "+" means a plus, "." means an empty cell.

Output:
For each test case, print the string "X" if the crosses won, "O" if the noughts won, "+" if the pluses won, "DRAW" if there was a draw.

Example:
inputCopy:
5
+X+
OXO
OX.
O+.
+OX
X+O
.XO
OX.
+++
O.+
X.O
+..
.++
X.O
+..
outputCopy:
X
O
+
DRAW
DRAW
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T_testcases = 0;
    cin >> T_testcases;
    
    while(T_testcases--)
    {
        vector<string> vobj;
        int cnt = 0;
        for(int i = 0; i < 3; i++)
        {
            string str;
            cin >> str;
            vobj.push_back(str);
        }
        
        char ch = '.';
        //For columns
        if((vobj[0][0] == vobj[1][0]) && (vobj[1][0] == vobj[2][0]))
        {
            ch = vobj[0][0];
        }
        if((vobj[0][1] == vobj[1][1]) && (vobj[1][1] == vobj[2][1]))
        {
            ch = vobj[0][1];
        }
        if((vobj[0][2] == vobj[1][2]) && (vobj[1][2] == vobj[2][2]))
        {
            ch = vobj[0][2];
        }
        
        //For rows
        if((vobj[0][0] == vobj[0][1]) && (vobj[0][1] == vobj[0][2]))
        {
            ch = vobj[0][0];
        }
        if((vobj[1][0] == vobj[1][1]) && (vobj[1][1] == vobj[1][2]))
        {
            ch = vobj[1][0];
        }
        if((vobj[2][0] == vobj[2][1]) && (vobj[2][1] == vobj[2][2]))
        {
            ch = vobj[2][0];
        }

        //for diagonal 1
        if((vobj[0][0] == vobj[1][1]) && (vobj[1][1] == vobj[2][2]))
        {
            ch =  vobj[0][0];
        }
        
        //for diagonal 2
        if((vobj[0][2] == vobj[1][1]) && (vobj[1][1] == vobj[2][0]))
        {
            ch = vobj[0][2];
        }
        
        if(ch == '.')
            cout << "DRAW" << endl;
        else
            cout << ch << endl;
        
    }

    return 0;
}
