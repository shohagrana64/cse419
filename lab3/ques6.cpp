// https://vjudge.net/problem/UVA-12250

#include <bits/stdc++.h>
#include <cmath>
 
using namespace std;
int main()
{   
    string s;
    
    int t = 1;
    
    cin >> s;
    while (s != "#")
    {
        printf("Case %d: ", t);
        
        if (s == "HELLO")
            printf("ENGLISH\n");
        else if (s == "HOLA")
            printf("SPANISH\n");
        else if (s == "HALLO")
            printf("GERMAN\n");
        else if (s == "BONJOUR")
            printf("FRENCH\n");
        else if (s == "CIAO")
            printf("ITALIAN\n");
        else if (s == "ZDRAVSTVUJTE")
            printf("RUSSIAN\n");
        else
            printf("UNKNOWN\n");
        ++t;
        
        cin >> s;
    }