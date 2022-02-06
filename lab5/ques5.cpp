// https://vjudge.net/problem/CodeForces-755A

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n,i,j,p;
    cin>>p;
    n=1000000;
		
    int arr[n];
    	for (i = 0; i < n ; i++){
        arr[i] = 1; 
    }
    	arr[0]=0;
    	arr[1]=0;
    	for(i=2;i*i<=n;i++){
    		if(arr[i]!=0){
    		for(j=i*i;j<=n;j+=i){
    			arr[j]=0;
    		}
    		}
 
    	}
    	// for(i=0;i<n;i++){
    	// 	cout<<arr[i]<<endl;
    	// }
    	
    	for(i=1;i<1000;i++){
    		if(arr[(p*i)+1]!=1){
    			cout<<i<<endl;
    			break;
    		}

    		
    	}
    	
    
    return 0;
}