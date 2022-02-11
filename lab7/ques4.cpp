// https://vjudge.net/problem/CodeChef-FLOW016

#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;
long long int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}
int main(){
int n;

cin>>n;
while(n--){
   long long int a,b;
   cin>>a>>b;
   long long int gcd= GCD(a,b);
   long long int lcm= (a*b)/gcd;
   cout<<gcd<<" "<<lcm<<endl;
}
    return 0;
}
/*Here GCD() is a function that finds
the greatest common divisor of the two
input numbers*/