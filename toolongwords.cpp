#include<bits/stdc++.h>
using namespace std;


int main(){ 
    // using ascii values 0 has ascii of 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    vector<string> v;
    while(t--){
    string s,p;
    cin>>s;
    int a=s.length();
    if(a<=10){
        cout<<s<<"\n";
    }
    else{
        p[0]=s[0];

        int j=1;
        int g=a-2;
        while(g>0){
            int x=g%10;
            x=x+48;
            p[j++]=x;
            g=g/10;
            
        }
        p[j++]=s[a-1];
        
        int k=j-1;
        for(int i=1;i<j-1;i++){
            if(i<k){
                char temp;
                temp=p[i];
                p[i]= p[k-1];
                p[k-1]=temp;
            }
            k--;

        }
        

        for(int i=0;i<j;i++){
            cout<<p[i];
        }
        cout<<"\n";

    }

    
  }


 
  



    
}