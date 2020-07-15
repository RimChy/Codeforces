#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int h=1,x=0;
        while(n>1){
            long long p=((h*(h-1))/2)*3+2*h;
            if(p>n){
                n=n-(((h-1)*(h-2)/2)*3+2*(h-1));
               // cout<<h<<endl;
                h=1;
                x++;
            }
            else if(p==n) {
                n=0;x++;
            }
            else h++;

        }
        cout<<x<<endl;


    }
    return 0;
}
