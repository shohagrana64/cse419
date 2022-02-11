// https://vjudge.net/problem/HackerRank-simple-array-sum

#include <iostream>
using namespace std;

int main() {
	int n,p,sum=0;
	cin>>n;
	while(n--){
		cin>>p;
		sum=sum+p;
	}
	cout<<sum<<endl;
	return 0;
}