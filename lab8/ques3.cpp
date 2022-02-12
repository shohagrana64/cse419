// https://vjudge.net/problem/SPOJ-SUMFOUR

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

int n;
cin>>n;
int a[n],b[n],c[n],d[n];
int sumAB[n*n];
int sumCD[n*n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
    //cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        sumAB[i*n+j]=a[i]+b[j];
    }
}
sort(sumAB,sumAB+n*n);
int count=0;
for(long long int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int temp=-c[i]-d[j];
		//count+=(upper_bound(sumAB,sumAB+n*n,temp)-lower_bound(sumAB,sumAB+n*n,temp)); 
		pair<int*,int*>p=equal_range(sumAB,sumAB+n*n,temp);
        count+=p.second-p.first;
    }
}
cout<<count;
return 0;
}