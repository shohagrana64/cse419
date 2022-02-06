// https://vjudge.net/problem/CodeForces-1225A

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if(x == y)
        cout << x * 10 << " " << y * 10 + 1;
    else if(x + 1 == y)
        cout << x << " " << y;
    else if(x == 9 && y == 1)
        cout << "9 10";
    else
        cout << -1;

    return 0;
}