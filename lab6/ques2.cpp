// https://vjudge.net/problem/CodeChef-FLOW017

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
		int arr[3];
		for(int i=0;i<3;i++){
			cin>>arr[i];
	}
	sort(arr,arr+3);
	cout<<arr[1]<<endl;
	}
	return 0;
}
