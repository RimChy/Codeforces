#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

   while(t--){
        char s[10][10];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>s[i][j];
            if(s[i][j]=='5') s[i][j]='7';
        }

    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<s[i][j];
        }
        cout<<endl;
    }





    }
}
