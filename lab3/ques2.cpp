// https://vjudge.net/problem/CodeForces-236A

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int l,i,cnt=1;
    set<char> s;
    string p;
    cin>>p;
       for (char c: p)
   {
      s.insert(c);
   }
    if(s.size()%2==1)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
