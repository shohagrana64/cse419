// https://vjudge.net/problem/UVA-10699

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    long long int n,i,j,count=0;
    while( cin>>n && n!=0){
    	//long int arr[n];
    	count=0;
    	cout<<n<<" : ";
    	for (i = 2; i*i <= n ; i++){
    		if(n%i==0){
    			count++;
    		}
    		while(n%i==0){
    			n=n/i;
    		}
    		
    }
    if(n>2){
    	count++;
    }
    cout<<count<<endl;
    }
    return 0;
}