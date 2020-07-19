#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,s=0;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        //cout<<s<<" ";

        if(s==-1){
                c++;
            s=0;
        }

    }
    cout<<c<<endl;
}
