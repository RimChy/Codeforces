#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,flag=1;
    cin>>n;
    int a[n+1];
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==i) p++;

    }
    for(int i=0;i<n;i++){
        if(a[i]!=i){
            if(a[a[i]]==i){
                p+=2;
                flag=0;
                break;
            }
        }
    }
    if(flag==1 && p!=n) p++;
    cout<<p<<endl;


}
