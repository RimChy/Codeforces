#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int s[]={4,7,44,77,47,74,474,477,777,447,747,444,744};
    for(int i=0;i<13;i++){
        if(n%s[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}

