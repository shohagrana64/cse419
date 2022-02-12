// https://vjudge.net/problem/UVA-543

#include <bits/stdc++.h> 
using namespace std; 
bool status[1000000+1]; 
void siv(int N){
    int sq=sqrt(N);
    for(int i=4;i<=N;i+=2){
        status[i]=1;
    }
    for(int i=3;i<=sq;i+=2){
        if(status[i]==0){
            for(int j=i*i;j<=N;j+=i)
                status[j]=1;
        }
    }
    status[1]=1;
}
int main() 
{
    int n;
    siv(1000000);
    // for(int i=0;i<10;i++){
    //     cout<<status[i]<<endl;
    // }
    while(cin>>n && n!=0){
        int startp=3, endp=n-1, count=0;
        cout<<n<<" = ";
        while(startp<=endp){
            if(status[startp]+status[endp]==0 && startp+endp==n){
                cout<<startp<<" + "<<endp<<endl;
                break;
            }
            else if(startp+endp<n){
                startp++;
                //cout<<startp<<" ";
            }
            else{
                endp--;
                //cout<<endp<<" ";
            }
        }
        
    }
    return 0; 
}