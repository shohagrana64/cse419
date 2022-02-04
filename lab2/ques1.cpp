// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3666
#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
int main() {
    // your code goes here
    //string name;
    
    long long int t,n,m,mod;
    cin>>t;
    //double x1,y1,x2,y2;
    
    while(t--){
    int numbers[10]= { };
    //rows=0;
    
    cin>>n;
    for(int i=1;i<=n;i++){
                m=i;
                while(m!=0){
                    mod=m%10;
                    m=m/10;
                    numbers[mod]+=1;
                }
            }
            for(int j=0;j<10;j++){
                if(j<9)
                    printf("%ld ",numbers[j]);
                else
                    printf("%ld\n",numbers[j]);//for printing next line
            }
    //rows=(sqrt(1+4*2*n)-1)/2;
    //cout<<rows<<endl;
    }
    // //int q= sqrt(pow((x2-x1),2)+pow(y2-y1,2));
    // cout<<p<<endl;
    // //printf("%.3f\n",p);
    return 0;
}