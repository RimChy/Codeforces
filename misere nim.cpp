#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=1;
    cin>>t;
    while(t--){
        cin>>n;
        int nim=0,s,pile=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s!=1) nim=1;
            pile ^= s;

        }
        cout<<"Case "<<c++<<": ";
        if(!nim)
        {

            if(n&1){
                cout<<"Bob"<<endl;

            }
            else cout<<"Alice"<<endl;
        }
        else{
            if(pile){
                cout<<"Alice"<<endl;
            }
            else cout<<"Bob"<<endl;
        }
    }
}
