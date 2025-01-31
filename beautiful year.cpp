#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    int y,a,b,c,d;
    cin>>y;
    for(int i=y+1;;i++){
        a=(i%10);
        b=(i/10)%10;
        c=(i/100)%10;
        d=i/1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d  ){
            cout<<i;
            break;
        }
        

    }
    return 0;
}

