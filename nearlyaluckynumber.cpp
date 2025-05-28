#include <bits/stdc++.h>

using namespace std;
int main()
{
    // long long int n;
    // cin>>n;
    // int arr[19];
    // int i=0;
    // while(n>0){
    //     int x;
    //     x=n%10;
    //     n=n/10;
    //     arr[i++]=x;
    // }

    string arr;
    cin>>arr;
    // can useboth methods but difference in time complexity string method takes more time

    int count=0;
    for(int j=0;j<arr.length();j++){
        if(arr[j]=='4' || arr[j]=='7'){
            count+=1;
        }
    }
    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

   


}