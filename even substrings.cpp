#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int a=s[i]-'0';
        if(a%2==0){
          sum+=(i+1);
        }
    }
    cout<<sum<<endl;

}
