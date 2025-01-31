#include <iostream>   
#include <string>     
#include <vector>     
#include <algorithm> 
#include <set>       

using namespace std;

int main()
{   
    string name;
    const size_t maxLength = 100;
    cin >> name;
    int length = name.size(), n;
    set<char> st;
    for (int i = 0; i < length; i++)
    {
        st.emplace(name[i]);
    }
    n = st.size();
    if (n % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}

