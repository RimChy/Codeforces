
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m<n-1 || m>2*n+2) cout<<-1<<endl;
    else{
        if(m==n-1){
            for(int i=0;i<m;i++) cout<<"01";
                    cout<<"0"<<endl;
        }
        else if(m==n) {
            for(int i=0;i<m;i++) cout<<"01";
            cout<<endl;
            return 0;
        }
        else{
            while(m>0 && n>0){
                if(m<2*n){
                    cout<<"10";
                    m--;
                    n--;
                }
                else {
                    cout<<"110";
                    n--;
                    m-=2;
                }
            }
          for(int i=0;i<m;i++) cout<<"1";
          cout<<endl;
        }
    }
}
