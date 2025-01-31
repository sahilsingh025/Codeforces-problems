#include <iostream>   
#include <string>     
#include <vector>     
#include <algorithm> 
#include <utility>     

using namespace std;

int main()
{   
    int n,t,temp;cin>>n;cin>>t;
    string queue,copy;
    cin>>queue;
    for(int j=1;j<=t;j++){
        copy=queue;
        for(int i=0;i<n;i++){
            if(queue[i]=='B' && queue[i+1]=='G'){
                temp=copy[i];
                copy[i]=copy[i+1];
                copy[i+1]=temp;

            }
        }
        queue=copy;
    }
    cout<<queue;
    return 0;
}

