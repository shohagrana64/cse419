// https://vjudge.net/problem/UVA-11849

#include<bits/stdc++.h>
using namespace std;
main()
{
    long n,m;
    while(cin>>n>>m)
    {
        long long i,a,cnt=0;
        map<long,long>mp;
        if(n==0&&m==0)
            break; 
        for(i=1;i<=n;i++)
        {
            cin>>a;
            mp[a]=1;
        }
        for(i=1;i<=m;i++)
        {
            cin>>a;
            if(mp[a]==1)
                cnt++;
        }
        cout<<cnt<<endl;
    }
}