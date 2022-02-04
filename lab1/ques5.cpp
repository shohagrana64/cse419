//https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
	long long int n;
	//cin>>n;
	long long int sum=0;
	scanf("%lld",&n);

		if(n%2==0){
			sum = n/2;
		}
		else{
			sum =-((n+1)/2);
		}
	    
	
	printf("%lld\n",sum);
	//cout << sum << endl;
	return 0;
}