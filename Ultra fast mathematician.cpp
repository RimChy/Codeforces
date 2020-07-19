#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,q;
int i;
    cin>>p>>q;
    for(  i=0;i<p.size();i++){
        if(p[i] != q[i]){
            p[i] = '1';
        }
        else{
            p[i] = '0';
        }
        cout<<p[i];
    }
    cout<<endl;


}
