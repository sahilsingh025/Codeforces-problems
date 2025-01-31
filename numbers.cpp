#include <iostream>   
#include <string>     
#include <vector>     
#include <algorithm> 
#include <set>       

using namespace std;

int main()
{   
    string s1,s2;
    cin>>s1;
    cin>>s2;
    const size_t maxLength = 100;
    int length=s1.size();
    for(int i=0;i<length;i++){
        if(s1[i]==s2[i]){
            cout<<false;
        }
        else{
            cout<<true;
        }
    }
    
    return 0;
}

