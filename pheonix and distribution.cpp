#include <bits/stdc++.h>
using namespace std;

string LexicographicalMaxString(string str)
{
    // loop to find the max leicographic
    // substring in the substring array
    string mx = "";
    for (int i = 0; i < str.length(); ++i)
        mx = max(mx, str.substr(i));

    return mx;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){

    string str;
    cin>>str;
    sort(str.begin(),str.end());
    string s=LexicographicalMaxString(str);

    }


}
