// https://vjudge.net/problem/UVA-12578

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	double a,width,rad,areaRed,areaRec;
	cin>>t;
	while(t--){
		cin>>a;
		width=(a*3)/5;
		rad=a/5;
		areaRed=M_PI*rad*rad;
		areaRec=(a*width)-areaRed;
		cout<<std::setprecision(2)<<fixed<<areaRed<<" "<<std::setprecision(2)<<fixed<<areaRec<<endl;
	}
	return 0;
}