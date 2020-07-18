#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>v;
    int t,d,m,n,x,y,dd,mm,day,no;
    cin>>t;
    while(t--){
    cin>>d>>m;
    cin>>x>>y;

    for(int i=0;i<y;i++){
        cin>>n>>dd>>mm;

        if(mm<m){
            day=(dd+30-d)+((mm+m-1)*30);
        }
        else day=(dd+30-d)+((mm-m-1)*30);
        v.push_back(make_pair(day,n));

    }
    if(x>=y) {
        cout<<"Everybody!!"<<endl;

    }
    else {
        cout<<"Oops:("<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<x;i++){
        cout<<v[i].second<<" ";
    }

    cout<<endl;
    }

    }



}
