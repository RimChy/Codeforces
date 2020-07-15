#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1){
        cout<<n/2<<" "<<(n/2)+1<<endl;
    }
    else {
            int h=n/2;
    if(h%2==0)
        cout<<(n/2)-1<<" "<<(n/2)+1<<endl;

    else cout<<h-2<<" "<<h+2<<endl;
    }

}
