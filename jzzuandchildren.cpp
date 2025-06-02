#include<bits/stdc++.h>
using namespace std;


int main(){ 
    int n,m;
    cin>>n;
    cin>>m;
    deque<pair<int,int>> dq;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        dq.push_back({i,x});
    }

    while(dq.size() != 1){
        pair<int,int> p=dq.front();
        int a,b;
        a=p.first;
        b=p.second;
        if(b<=m){
            dq.pop_front();
        }
        else if(b>m){
            b=b-m;
            dq.pop_front();
            dq.push_back({a,b});

        }

    }

    pair<int,int> p=dq.front();
    cout<<p.first+1;

  
   

    
}