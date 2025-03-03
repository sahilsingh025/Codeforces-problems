#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    //bb
    
    int lower=0,upper=0,l;
    l=s.size();
    for(int i=0;i<l;i++){
        if(islower(s[i])){
            lower+=1;
        }
        if(isupper(s[i])){
            upper+=1;

        }
    }
    
    if(lower>=upper){
        for(int i=0;i<l;i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    else if(lower<upper){
        for(int i=0;i<l;i++){
            s[i]=toupper(s[i]);
        }
        cout<<s;
    }
    
    







}