// https://vjudge.net/problem/UVA-12577

#include <iostream>
using namespace std;

int main() {
	string s;
	int c=0;
	while(cin>>s && s!="*"){
		c++;
		if(s=="Hajj"){
			cout<<"Case "<<c<<": "<<"Hajj-e-Akbar"<<endl;
		}
		else{
			cout<<"Case "<<c<<": "<<"Hajj-e-Asghar"<<endl;
		}
	}
	return 0;
}