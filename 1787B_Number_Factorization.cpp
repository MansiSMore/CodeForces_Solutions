/*
B. Number Factorization
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an integer 𝑛.

Consider all pairs of integer arrays 𝑎 and 𝑝 of the same length such that 𝑛=∏𝑎𝑝𝑖𝑖 (i.e. 𝑎𝑝11⋅𝑎𝑝22⋅…) (𝑎𝑖>1;𝑝𝑖>0) 
and 𝑎𝑖 is the product of some (possibly one) distinct prime numbers.

For example, for 𝑛=28=22⋅71=41⋅71 the array pair 𝑎=[2,7], 𝑝=[2,1] is correct, but the pair of arrays 𝑎=[4,7] , 𝑝=[1,1] is not, because 4=22 is a product of non-distinct prime numbers.

Your task is to find the maximum value of ∑𝑎𝑖⋅𝑝𝑖 (i.e. 𝑎1⋅𝑝1+𝑎2⋅𝑝2+…) over all possible pairs of arrays 𝑎 and 𝑝. Note that you do not need to minimize or maximize the length of the arrays.

Input:
Each test contains multiple test cases. The first line contains an integer 𝑡 (1≤𝑡≤1000) — the number of test cases.
Each test case contains only one integer 𝑛 (2≤𝑛≤109).

Output:
For each test case, print the maximum value of ∑𝑎𝑖⋅𝑝𝑖.

Example:
inputCopy:
7
100
10
864
130056192
1000000000
2
999999018
outputCopy:
20
10
22
118
90
2
333333009
Note:
In the first test case, 100=102 so that 𝑎=[10], 𝑝=[2] when ∑𝑎𝑖⋅𝑝𝑖 hits the maximum value 10⋅2=20. Also, 𝑎=[100], 𝑝=[1] does not work since 100 is not made of distinct prime factors.
In the second test case, we can consider 10 as 101, so 𝑎=[10], 𝑝=[1]. 
Notice that when 10=21⋅51, ∑𝑎𝑖⋅𝑝𝑖=7.
*/
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <vector>
#define ll long long

using namespace std;

unordered_map<ll, int> uobj;

static bool comp(pair<ll, int>& a,
        pair<ll, int>& b)
{
    return a.second < b.second;
}
void primeFactors(ll num)
{
    while (num % 2 == 0)
	{
		uobj[2]++;
		num = num/2;
	}

	for (int i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			uobj[i]++;
			num = num/i;
		}
	}

	if (num > 2)
		uobj[num]++;
}
int main()
{
    ll T_testcases = 0;
    cin >> T_testcases;
    while(T_testcases--)
    {
        ll n = 0;
        cin >> n;
        primeFactors(n);

        vector<pair<ll,int> > vobj;
        for(auto x: uobj)
        {
            //cout << x.first << " " << x.second << endl;
            vobj.push_back(make_pair(x.first, x.second));
        }
        sort(vobj.begin(), vobj.end(), comp);
        ll ans = 0;
        for(int i = 0; i < vobj.size(); i++)
        {
            int minval = vobj[i].second;
            ll mult = 1;
            for(int j = i; j < vobj.size(); j++)
            {
                mult *= vobj[j].first;
                vobj[j].second -=minval;
            }
            //cout << vobj[i].first << " " << vobj[i].second << endl;
            //vobj.push_back(make_pair(x.first, x.second));
            ans += mult * minval; 

        }
        cout << ans << endl;
        uobj.clear();
    }
    return 0;
}