#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,flag;
    string s;
    vector<string>vec;

    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        vec.clear();
        for(int i=0;i<n;i++){
            cin>>s;
            vec.push_back(s);

        }
        sort(vec.begin(),vec.end());
        flag=1;
        for(int i=0;i<n-1;i++){
            if(vec[i+1].size()>=vec[i].size()){
                s=vec[i+1].substr(0,vec[i].size());
                if(s==vec[i]){
                flag=0;
                break;}
            }
        }
        cout<<"Case "<<j+1<<": ";
        if(flag)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
