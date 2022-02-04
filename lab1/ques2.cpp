//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {

	while(true)
	{
		int n1,n2,total;
		cin>>n1>>n2;
		if(n1==0 && n2==0) break;
		total=0;
		while(n1<=n2){
			int tmp = sqrt(n1);
            if(n1 == pow(tmp,2))total++;
			// if(pow(n1,2)<=n2 && ){
			// 	total++;
			// 	//cout << pow(n1,2) << endl;
			// }
			n1++;
		}
	    cout << total << endl;
	}
	return 0;
}