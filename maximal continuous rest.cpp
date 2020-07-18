#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin >> n;
int a[n+1],b[n+1],p=0,x=0;
vector<int>v;
for (int i = 0; i < n; i++){
    cin>>a[i];
    b[i]=a[i];
    v.push_back(a[i]);
}
for(int i=0;i<n;i++){
    v.push_back(b[i]);
}
for(int i=0;i<v.size();i++){

    if(v[i]==1){
        p++;
        //cout<<p<<endl;
    }
    else {

        x=max(x,p);
        p=0;

    }


    }
    cout<<x<<endl;

}


