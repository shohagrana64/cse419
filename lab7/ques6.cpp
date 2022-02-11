// https://vjudge.net/problem/LightOJ-1138

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
long long customBinary(int start, int end, int n){
    int mid;
	int count;
	int t;
	if(start > end) {
		return -1;
	}
	mid = (start + end) / 2;
    count = findTrailingZeros(mid);
	if(count == n) {
		while(findTrailingZeros(mid) == n) {
			mid--;
		}
		return ++mid;
	}

	if(count < n) {
		return customBinary(mid+1, end, n);
	}

	else {
		return customBinary(start, mid-1, n);
	}
}
int main(){
long long int n,p;
cin>>n;
int c=1;
while(n--){ 
    int z;
    cin>>z;
    int q=customBinary(1,INT_MAX,z);
    if(q!=-1){
        cout<<"Case "<<c<<": "<<q<<endl;
    }
    else{
         cout<<"Case "<<c<<": "<<"impossible"<<endl;
    }
    c++;
    
}

return 0;
}