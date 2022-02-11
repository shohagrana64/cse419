// https://vjudge.net/problem/UVA-11827

#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main(){
int n;
int arr[100];
cin>>n;
getchar();
string s;
while(n--){
    int p=0;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>arr[p]){
        p++;
    }
    int ans=0;
        for(int i=0;i<p;i++)
        {
            for(int j=i+1;j<p;j++)
            {
               ans=max(ans,GCD(arr[i],arr[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}