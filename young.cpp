#include <iostream>   
#include <string>     
#include <vector>     
#include <algorithm> 
#include <set>
using namespace std;

int main(){
    int x=0,y=0,z=0,n;
    cin>>n;

    
    for(int i=1;i<=n;i++){
        int a,b,c;
        
        cin>>a;
        cin>>b;
        cin>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}