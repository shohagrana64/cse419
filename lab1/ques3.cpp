// https://www.spoj.com/problems/DIVSUM/en/
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
typedef long long ll;
int main()
{
	int t;
	//cin>>t;
	
	scanf("%d",&t);
	int z=0;
	while(z<t)
	{
    ll n;
    cin >> n;
    int sqrtn = sqrt(n);
    
    ll sum = 0;
    for (ll i = 1; i <= sqrtn; ++i) /// O(√n)
    {
        if (n % i != 0) continue; 
        sum += i;
        ll t = n / i;
        if (i != t) sum += t; 
    }
    sum=sum-n;
    cout << sum << endl;
    z++;
	}
    return 0;
}