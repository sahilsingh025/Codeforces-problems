#include <bits/stdc++.h>

using namespace std;

int main()
{

    int l;
    string a, b;
    cin >> a;
    cin >> b;

    l = a.size();
    for (int i = 0; i < l; i++)
    {
        if (islower(a[i]))
        {
            a[i] = toupper(a[i]);
        }
        if (islower(b[i]))
        {
            b[i] = toupper(b[i]);
        }
    }

    int count = 0,chq=0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == b[i])
            count += 1;
    }
    if (count == l)
    {
        cout << "0";
    }
    else
    {
        for (int i = l-1; i >= 0; i--)
        {
            if (a[i] > b[i])
            {
                chq=i;
                
            }
            else if (a[i] < b[i])
            {
                chq=i;
                
            }
        }
    }
    if(a[chq]>b[chq]) cout<<"1";
    else if(a[chq]<b[chq]) cout<<"-1";
}