#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int t;
    string str;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++){
            cout<<s[i%b];
        }
        cout<<endl;
    }
}
