// https://vjudge.net/problem/UVA-10954

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

int n;
while(cin>>n && n!=0){
priority_queue<int, vector<int>, greater<int> > nums;
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    nums.push(t);
    }
    int cost=0,num1,num2;
    while (nums.size()> 1)
    {    
         num1=nums.top();
         nums.pop();
         num2=nums.top();
         nums.pop();
         cost=cost+num2+num1;
         nums.push(num1+num2);
    }
   // int p= nums.top();
    cout<<cost<<endl;
}
return 0;
}