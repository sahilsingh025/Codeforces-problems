#include <bits/stdc++.h>

using namespace std;




int main()
{
    int l;
    string a,b;
    cin>> a;
    cin>> b;
    l=a.size();
    for(int i=0;i<l;i++){
        if(a[i]==b[i] ) cout<<"0";
        
        else if(a[i]!=b[i] ) cout<< "1";
    }


}