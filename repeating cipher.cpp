#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int j=1,i=0;
    while(i<n){
        cout<<s[i];
        i+=j;
        j++;
    }
}
