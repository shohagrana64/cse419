// https://vjudge.net/problem/CodeForces-755B

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n1,n2,size,common;
    string p;
    cin>>n1>>n2;
    set<string> s;
    if(n1>n2){
    	cout<<"YES"<<endl;
    }
    else if(n2>n1){
    	cout<<"NO"<<endl;
    }
    else{
    for(int i=0;i<n1;i++){
    	cin>>p;
    	s.insert(p);
    }
    for(int i=0;i<n2;i++){
    	cin>>p;
    	s.insert(p);
    }
    size=s.size();
    common=n1+n2-size;
    if(n1-common>=n2-common && common%2==1){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
  }
    return 0;
}
