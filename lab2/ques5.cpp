// https://vjudge.net/problem/HDU-1040

#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
main(){
   long long int t,n;
 
    cin>>t;
	while(t--){
		cin>>n;
		long long int arr[n]={};
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for (int i = 0; i < n; i++){ 
			if(i==n-1){
				 cout << arr[i]<<endl;
			}
			else{
        cout << arr[i] << " "; 
			}
		}
	}
	return 0;
}