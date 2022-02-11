// https://vjudge.net/problem/UVA-11417

#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main(){
int g=0,n;
while(cin>>n && n!=0){
    g=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
        g+=GCD(i,j);
        }
    }
    cout<<g<<endl;
}
return 0;
}

/*Here GCD() is a function that finds
the greatest common divisor of the two
input numbers*
