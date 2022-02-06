// https://vjudge.net/problem/CodeChef-SEGM01

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t)
	{
	    string s;
	    int i,j,onePresentCheck=0,notConsecutive=0,c=0;
	    cin>>s;
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	            if(c==1)
	            {
	                j=i;
	                onePresentCheck=1;
	            }
	            else
	            {
	                if((i-j)==1)
	                {
	                    j=i;
	                }
	                else
	                {
	                    notConsecutive=1;
	                    break;
	                }
	            }
	        }
	    }
	    if((onePresentCheck==1)&&(notConsecutive==0))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    t--;
	}
	return 0;
}
