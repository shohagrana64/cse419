// https://vjudge.net/problem/AtCoder-abc179_c

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        count+=(n-1)/i;
    }
    cout<<count<<endl;
    return 0;
}