#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    int l=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a == 1) l++;
    }
    if(l>0) cout<<"HARD\n";
    else cout<<"EASY\n";
}
