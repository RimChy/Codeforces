#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long p=0,flag=1;
        while(n>1){
            if(n%6==0) {
                p++;
                n/=6;
            }
            else if(n%3==0) {
                p+=2;
                n/=3;
            }
            else {
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<p<<endl;
        else cout<<-1<<endl;

    }


}
