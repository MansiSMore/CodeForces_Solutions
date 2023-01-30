#include <iostream>

using namespace std;
string str = "314159265358979323846264338327";

int main()
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        
        int cnt = 0;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == str[i])
                cnt++;
            else
                break;
        }
        cout << cnt << endl;
    }

    return 0;
}
