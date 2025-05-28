#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    int count=0;
    for(int i=0;i<4;i++){
        if(x>2){
            x--;
            count++;
        }
        else if(x<2){
            x++;
            count++;
        }
        
        if(y>2){
            y--;
            count++;
        }
        else if(y<2){
            y++;
            count++;
        }

    }
    cout<<count;
}