// https://vjudge.net/problem/SPOJ-FIBEZ

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long long int arr[500000+5];
long long int fibonacci(int n){
    long long int mod=100000000+7;
    if(n==0||n==1) return 1;
    else if(arr[n]==0){
        arr[n]= (fibonacci(n-1)%mod+fibonacci(n-2)%mod)%mod;
    }
    return arr[n];
    
}
int main() {
    int t,a;
    fibonacci(500000);
    scanf( "%d", &t ); 
    while(t--){
	scanf( "%d", &a ); 
    
    if(a==1 || a==2){
        printf("%d\n",1);
    }
    else{
    	printf("%lld\n",arr[a-1]);
    }
    }
	return 0;
}