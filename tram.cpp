#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> p[n];
    int count=0;
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>p[i].first;
        count=count-p[i].first;
        cin>>p[i].second;
        count=count+p[i].second;
        if(count>temp){
            temp=count;
        }
    }

    cout<<temp;



}