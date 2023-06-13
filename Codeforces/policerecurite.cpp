#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    int a = 0, b = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> e;
        if(e == -1)
        {
            if(a > 0)
                a--;
            else
                b++;
        }
        else
            a += e;
    }

    cout << b << endl;
    return 0;
}