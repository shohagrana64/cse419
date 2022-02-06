// https://vjudge.net/problem/LightOJ-1043

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int i,test;
    double AB,AC,BC,AD,DE,ratio;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>AB>>AC>>BC>>ratio;
        ratio = ratio/(ratio+1);
        AD = AB*sqrt(ratio);
        printf("Case %d: %lf\n",i,AD);
    }
    return 0;
}