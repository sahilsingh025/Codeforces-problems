#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }

    int left0=0,left1=0;
    for(int i=0;i<n;i++){
        if(arr[i].first==0){
            left0++;
        }
        else{
            left1++;
        }
    }
    int r0=0,r1=0;
    for(int i=0;i<n;i++){
        if(arr[i].second==0){
            r0++;
        }
        else{
            r1++;
        }
    }

    int count=0;
    if(r0>r1){
        count=count+r1;
    }
    else if(r0==r1){
        count=count+r0;
    }
    else{
        count=count+r0;
    }

    if(left0>left1){
        count=count+left1;
    }
    else if(left0==left1){
        count=count+left0;
    }
    else{
        count=count+left0;
    }

    cout<<count;


}