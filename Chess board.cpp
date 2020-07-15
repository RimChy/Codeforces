#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c,l;
    cin>>n;
    for(int k=0;k<n;k++){
        cin>>r>>c;
        int p=0;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                l=(r-i)*(r-i) + (c-j)*(c-j);
                if(l == 5){
                    p++;
                }
            }
        }
        cout<<"Case "<<k+1<<": "<<p<<endl;;
    }

}
