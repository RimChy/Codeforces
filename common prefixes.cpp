#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;

        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s(50,'a');
        cout<<s<<endl;
        for(int i=0;i<n;i++){
        s[a[i]] = (s[a[i]] + 1 - 'a') % 26 + 'a';
			cout << s << endl;
        }
    }



}
