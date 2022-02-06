// https://vjudge.net/problem/CodeForces-124A

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n,a,b,t,count=0;
    cin>>n>>a>>b;
    t=n-a;
    for(int i=a+1;i<=n;i++){
    	if(n-i<=b){
    		count++;
    	}
    }
    cout<<count<<endl;
    return 0;
}

// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
 
// int main()
// {
//     int n,p,q;
//     cin>>n>>p>>q;
//     if((n-p-1)>q){
//     	cout<<q+1<<endl;
//     }
//     else{
//     cout<<(n-p)<<endl;
//     }
//     return 0;
// }