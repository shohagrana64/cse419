// https://vjudge.net/problem/CodeChef-FLOW004

#include <iostream>
using namespace std;

int main()
{
   int t,n,first,last,sum;
   cin>>t;
   while(t--){
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
	sum=first+last;
	cout<<sum<<endl;
   }
   return 0;
}