#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int l,count=0;
   l=s.size();

   for(int i=0;i<l;i++){
    if(s[i]=='4' || s[i]=='7'){
        count+=1;
    }
   }
   if(count==4 || count==7) cout<<"YES";
   else cout<< "NO"; 






}