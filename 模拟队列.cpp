#include <iostream>
using namespace std;
int m;
int q[100], hh, tt = -1;
int main()
{
    cin >> m;
    while (m -- )
    {
        string op;
        int x;
        cin >> op;
        if (op == "push")
        {
            cin >> x;
            q[ ++ tt] = x;
        }
        else if (op == "pop") hh ++ ;
        else if (op == "empty") cout << (hh <= tt ? "NO" : "YES") << endl;
        else cout << q[hh] << endl;
    }
    return 0;
}

