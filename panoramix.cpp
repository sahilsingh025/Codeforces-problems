#include <bits/stdc++.h>

using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;

}

int countp(int n){
    int count=0;
    for(int i=0;i<=n;i++){
        if(isprime(i)) count+=1;
    }
    return count;
}

int main()
{
    int n,m,a,b;
    cin>>n;
    cin>>m;
    a=countp(n);
    b=countp(m);
    if(a==(b-1) && isprime(m)) cout<<"YES";
    else cout<<"NO";

   
   
}