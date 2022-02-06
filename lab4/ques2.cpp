// https://vjudge.net/problem/CodeForces-1345B


#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{	

	long long int arr[100001];
	long long int s,ts;
		for(long long int i=1;i<=100000;i++){
			
    		s=((i*(i-1))/2);
    		ts=(i*(i+1))+s;
			arr[i]=ts;
		}
    int t,p;
	cin>>t;
	while(t--){
		int count=0;
		cin>>p;
		while(p>1){
		int z=(upper_bound(arr,arr+100000,p)-arr)-1;
		p-=arr[z];
		count++;
		}
		cout<<count<<endl;
	}
	return 0;
}