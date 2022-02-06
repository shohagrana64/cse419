// https://vjudge.net/problem/SPOJ-CSUMQ

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n,i,p;
    //double AB,AC,BC,AD,DE,ratio;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++){
    	cin>>p;
    	arr[i]=arr[i-1]+p;
    }
    int q,q1,q2;
    cin>>q;
    while(q--){
    	cin>>q1>>q2;
    	if(q1!=0){
    	//p=q2-q1;
    	cout<<arr[q2]-arr[q1-1]<<endl;
    	}
    	else{
    		cout<<arr[q2]<<endl;
    	}
    }
    return 0;
}