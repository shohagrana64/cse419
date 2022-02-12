// https://vjudge.net/problem/CodeChef-COTH001

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
	long long int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a>b){
            cout<<a-b<<endl;
        }
        else{
            
            int j=b%a;
            if(j==0){
                cout<<0<<endl;
            }
            else{
                cout<<a-j<<endl;
            }
        }
		}
	return 0;
}