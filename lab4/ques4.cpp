// https://vjudge.net/problem/UVA-10474

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int t,i,q,j=0;
    double AB,AC,BC,AD,DE,ratio;
    while(cin>>t>>q){
    	j++;
    	if(t==0 && q==0){
    		break;
    	}
    	int arr[t];
    	for(i=0;i<t;i++){
    		cin>>arr[i];
    	}
    	sort(arr,arr+t);
    	printf("CASE# %d:\n",j);
    	while(q--){
    	int m;
    	cin>>m;
    	int z=(upper_bound(arr,arr+t,m)-arr);
    	int p=(lower_bound(arr,arr+t,m)-arr);
    	if (p-z!=0){
    		//found
    		
    		cout<<m<<" found at "<<p+1<<endl;
    	}
    	else{
    		//not found
    		cout<<m<<" not found"<<endl;
    	}
        
    	}
    }
    
    return 0;
}
