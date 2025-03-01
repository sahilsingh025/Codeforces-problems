#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mount=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int arr[3],count=0;
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        for(int j=0;j<3;j++){
            if(arr[j]==1) count+=1;
        }
        if(count>=2) mount+=1;

    }

    cout<<mount;
    







}