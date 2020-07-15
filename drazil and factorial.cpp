#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,l=0;
    string s,a;
    cin>>n>>s;
    for(i=0;i<n;i++){
        if(s[i]=='2'){
            a+="2";

        }
        if(s[i]=='3'){
            a+="3";

        }
        if(s[i]=='4'){
            a+="322";

        }
        if(s[i]=='5'){
            a+="5";

        }
        if(s[i]=='6'){
            a+="53";

        }
        if(s[i]=='7'){
            a+="7";

        }
        if(s[i]=='8'){
           a+="7222";

        }
        if(s[i]=='9'){
            a+="7332";

        }
    }
    sort(a.begin(),a.end());
    reverse(a.begin(), a.end());
    cout<<a<<endl;

}
