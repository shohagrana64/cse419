// https://vjudge.net/problem/UVA-12592

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, string> umap; 
	int t,z;
	cin>>t;
    
	string p,q,key;
    getchar();
	while(t--){
		getline(cin, p);
		//cout<<p<<endl;
		getline(cin, q);
		//cout<<q<<endl;
		umap[p]=q;
	}
	// for (auto x : umap) {
    //  cout << x.first << " " << x.second << endl; 
	// }
	cin>>z;
    getchar();
	while(z--){
		getline(cin, key);
 unordered_map<string,string>::const_iterator got = umap.find (key);

  if ( got == umap.end() ){}
  else{
    cout << got->second<<endl;
  }
    }
	return 0;
}