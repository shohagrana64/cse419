// https://www.codechef.com/problems/BUGCAL
#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
int main() {
    
    long long int t,n,m,sum,finalsum=0;
    cin>>t;
    while(t--){
    	finalsum=0;
	    cin>>n>>m;
	    long long int z=1;
	    while(n!=0 || m!=0){
			sum = n%10 + m%10;
		    finalsum = finalsum + (sum%10)*z;
		    z *= 10;
		    m /= 10;
		    n /= 10;
	    }
    cout<<finalsum<<endl;
    
    }

    return 0;
}