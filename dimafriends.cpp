#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    set<int> s;
    int cnt1 = 0;
    int cnt2 = 0;
    int t=n+1;
    for(int i=sum+1;i<=sum+5;i++){
        for(int a=1;a<=sum+5;a=a+t){
            if(a==i){
                s.insert(i);
            }
        }
        cnt2++;
    }
    for(auto it:s){
        // cout<<it;
        cnt1++;
    }
    cout<<cnt2-cnt1;
}