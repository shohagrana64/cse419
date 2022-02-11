// https://vjudge.net/problem/CodeChef-FLOW013

#include <iostream>
using namespace std;

int main()
{
   int t,n1,n2,n3,sum;
   cin>>t;
   while(t--){
    cin >> n1 >>n2>>n3;
    if((n1+n2+n3)==180){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
	
   }
   return 0;
}