#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,a,b;
    set<int>s;
    set<int>::iterator it;
    cin>>n>>p;
    while(p--){
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    while(q--){
        cin>>b;
        s.insert(b);
    }

    if(s.size() == n){
        cout<<"I become the guy"<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

}
