#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,c=0;
    cin>>n>>p;
    int low =2,flag;
    vector<int>v,v1;
    while (low <= n) {
        flag = 0;

        for (int i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            v.push_back(low);

        ++low;
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[i+1]+1==v[j]) c++;
        }
    }

  // cout<<c;
     if(c>=p) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}

