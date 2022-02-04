// https://codeforces.com/problemset/problem/313/B

#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
main(){
    int t,l,r,cnt=0;

    int arr[100000];
    string s;

    cin>>s>>t;

    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
            cnt++;
        arr[i]= cnt;
    }

    while(t--){
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<endl;
    }

}