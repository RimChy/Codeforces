#include<bits/stdc++.h>
using namespace std;
int comp(string a,string b){
   return a.size()<b.size();
}
int main()
{
    int n;
    cin>>n;
     //getchar();
  vector<string>v;
    string s;
    for(int i=0;i<n;i++){

        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n-1;i++){
        if(v[i+1].find(v[i])==string::npos){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }


}
