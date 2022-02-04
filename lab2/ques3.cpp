// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1620
#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
 
int main() {
    // your code goes here
    long long int t,q;
    string s,sub;
    cin>>t;
    //double x1,y1,x2,y2;
    
    while(t--){
    cin>>s>>q;
    while(q--){
    	cin>>sub;
    	
    	if(strstr(s.c_str(),sub.c_str())){
    		cout<<"y"<<endl;
    	}
    	else{
    		cout<<"n"<<endl;
    	}
    }
  }
    return 0;
}