#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<pair<int,int>,string>m;
    int t,n;
    cin>>t;
    int code1,code2,x,y;
    string s;
    for(int i=0;i<t;i++){
        cin>>code1>>code2>>s;
         m[make_pair(code1,code2)] = s;
    }
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>code1>>code2;
        cout<<m[make_pair(code1,code2)]<<endl;
    }
    return 0;
}
