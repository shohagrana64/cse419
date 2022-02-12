// https://vjudge.net/problem/UVA-11057

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

int n;
while(cin>>n){
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int money,val1,val2;
    cin>>money;
    int leftp=0;
    int rightp=n-1;
    while(leftp<rightp){
        if(arr[leftp]+arr[rightp]==money){
            val1=arr[leftp];
            val2=arr[rightp];
            rightp--;
            leftp++;
        }
        else if(arr[leftp]+arr[rightp]<money){
            leftp++;
         
        }
        else{
            rightp--;
            //cout<<rightp;
        }
    }
    cout<<"Peter should buy books whose prices are "<<val1<<" and "<<val2<<"."<<endl<<endl;

}
return 0;
}