// https://vjudge.net/problem/SPOJ-NOTATRI

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n && n!=0){
   	    int a[n],i,j,k,count=0;
   	    for(i=0;i<n;i++){
   		    cin>>a[i];
   	    }
   	sort(a,a+n);
   	for(i=n-1;i>=0;i--){
   		j=0;
   		k=i-1;
   		while(k>j){
   			if(a[j]+a[k]<a[i]){
   				count+=k-j;
   				j++;
   			}
   			else{
   			    k--;
               }
   		}			
   		}
   		cout<<count<<endl;
   	}
    return 0;
}