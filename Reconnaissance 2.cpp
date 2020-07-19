#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=abs(a[n-1]-a[0]),c=n;
    for(int i=0;i<n-1;i++){
       if(abs(a[i+1]-a[i])<x) {
        x=abs(a[i+1]-a[i]);
        c=i+1;
       }
    }
    if(c==n){
        cout<<n<<" "<<1<<endl;
    }
    else cout<<c<<" "<<c+1<<endl;
}
