#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp,count=0;
    cin>> n;
    vector<char> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    temp=v[0];
    for(int i=0;i<n;i++){
        if(temp==v[i+1]) count+=1;
        else temp=v[i+1];
    }
    cout<<count;
}