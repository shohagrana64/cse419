// https://vjudge.net/problem/CodeForces-600B

#include <bits/stdc++.h>
#include <string>
using namespace std;
 // reference: https://www.geeksforgeeks.org/upper_bound-in-cpp/?ref=lbp
int main()
{	
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
		for(int i=0;i<n;i++){
			cin>>arr1[i];
			//cout<<arr[i]<<endl;
		}
		for(int i=0;i<m;i++){
			cin>>arr2[i];
		}
		 sort(arr1,arr1+n);

        for(int i=0;i<m;i++)
        {
            cout<<upper_bound(arr1,arr1+n,arr2[i])-arr1<<" ";
        }
	return 0;
}