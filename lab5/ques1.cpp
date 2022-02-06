// https://vjudge.net/problem/UVA-583

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    long long int n,i,j;
    while( cin>>n && n!=0){
    	//long int arr[n];
    	cout<<n<<" = ";
    	if(n<0){
    		cout<<-1<<" x ";
    		n=n*-1;
    	}
    	for (i = 2; i*i <= n ; i++){
    		while(n%i==0){
    			if(n!=i){
    			cout<<i<<" x ";
    			}
    			else{
    				cout<<i<<endl;
    			}
    			n=n/i;
    		}
    }
    if(n>=2){
    	cout<<n<<endl;
    }
    }
    return 0;
}