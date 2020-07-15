#include<bits/stdc++.h>
using namespace std;
int main()
{

    //freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    vector<int>v1;
    int a[n+1];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
//m[a]++;
        v.push_back(make_pair(a[i],i+1));
    }
    sort(v.begin(),v.end());
    sort(a,a+2*n);
    int p=0,x,y=0;
    for(int i=0;i<2*n;i++){
          //  cout<<a[i]<<" ";
        if(a[i]!=a[i+1]){
            v1.push_back(p+1);
            p=0;

        }
        else p++;
        cout<<a[i]<<p<<endl;
    }
    /*if(a[2*n-1]==a[2*n-2]) v1.push_back(p+2);
    else {
        v1.push_back(p+1);
        v1.push_back(1);

    }*/
    for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<endl;
        if(v1[i]%2==0) y++;
    }
    if(y!=v1.size()) cout<<-1<<endl;
    else {
        for(int i=0;i<2*n;i+=2){
            cout<<v[i].second<<" "<<v[i+1].second<<endl;
        }
    }
}

