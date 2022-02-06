// https://vjudge.net/problem/UVA-11727

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{	
	int t;
	cin>>t;
	int arr[3];
	int p=0;
	while(p<t){
		for(int i=0;i<=2;i++){
			cin>>arr[i];
			//cout<<arr[i]<<endl;
		}
	int n = sizeof(arr) / sizeof(arr[0]);
	
    sort(arr, arr + n);
		cout<<"Case "<<p+1<<": "<<arr[1]<<endl;
		p++;
	}
	return 0;
}