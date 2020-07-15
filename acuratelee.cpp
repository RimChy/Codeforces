#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s,s1;
        cin>>n>>s;
        int one=0,zero=0,onec=0,zeroc=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        int i=n-1;
        while(i>=0){
            if(s[i]=='0'){
                zeroc++;
                i--;

            }
            else {
                if(zeroc==0) {
                    s1+='1';
                    i--;
                }
                else{
                    zeroc=1;
                    i--;

                }
            }
        }
      for(int j=0;j<zeroc;j++) cout<<0;
      cout<<s1<<endl;

    }
}
