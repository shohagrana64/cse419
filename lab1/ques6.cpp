// https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
	int pages;
	cin >> pages;
	int numbers[7];
    //  store input from user to array
    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];
    }
    for(int i=0; i<7; i++){
        pages-=numbers[i];
        if(pages<=0){
            cout<<i+1<<endl;
            break;
        }
        if(i==6)
            i=-1;
    }
    return 0;
}