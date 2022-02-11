// https://vjudge.net/problem/CodeForces-633B

#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;
long long int findTrailingZeros(long long int a){
    long long int count=0;
    for(long long int i=5;a/i>=1;i*=5){
        count+=a/i;
    }
    return count;
}
int main(){
long long int n;
vector<long long> g1; 
cin>>n;
for(long long int i=1;i<=10000000;i++){
if(findTrailingZeros(i)==n){
    g1.push_back(i);
    }
}
cout<<g1.size()<<endl;
for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
    return 0;
}