#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1') p++;
        if(a[i]=='4' && a[i-1]=='1') {
                p++;

        }
        if(a[i]=='4' && a[i-1]=='4' && a[i-2]=='1'){
            p++;
        }


    }
    if(p==a.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
