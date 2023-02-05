#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n = 0, k = 0;   
    cin >> n >> k;

    while(k--)
    {
        if(n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    cout << n << endl;
    return 0;
}