#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
         int n,m,x,y;
        cin>>n>>m>>x>>y;
        int d=x*2,b=y;
        char c[n+1][m+1];
        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                cin>>c[i][j];

            }
        }
         int single=0,doublee=0;

       for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(c[i][j]=='.') single++;

            }
        }
       // else{
       int i=0;
        while(i<n ){
                for(int j=0;j<m-1;j++){
            if(c[i][j]=='.' && c[i][j+1]=='.') {
                j++;
                doublee++;
            }
                }
                i++;

        }
        if(doublee*b<doublee*d){
            cout<<doublee*b+(single-(doublee*2))*x<<endl;
        }
        else{
            cout<<doublee*d+(single-(doublee*2))*x<<endl;
        }

    }
}
