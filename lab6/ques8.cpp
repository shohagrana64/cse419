// https://vjudge.net/problem/CodeChef-FLOW007

#include <iostream>
using namespace std;

int main() {
    int n,t,reversedNumber=0,remainder;
	cin>>t;
	while(t--){
	reversedNumber=0;
	remainder=0;
    cin >> n;
    while(n != 0) {
    	
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << reversedNumber<<endl;
}
    return 0;
}