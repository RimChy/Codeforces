#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    string s="codeforces";
    if(n==1) cout<<s<<endl;
    else {
        if(n<=10) {
                cout<<s;
            for(long long int i=9-(n-2);i<10;i++) cout<<s[i];
            cout<<endl;
        }
        else {
                long long i=1,sum=0;
            while(sum<=n){
                sum+=i*20;
                i++;

            }
            for(long long j=0;j<i-1;j++) cout<<s;
            if(n-(sum-(i-1)*20)>10) cout<<s<<endl;
            else{
                    sum=n-(sum-(i-1)*20);
                for(long long i=9-(sum-1);i<10;i++) cout<<s[i];
            }
            cout<<endl;




        }
    }

}
