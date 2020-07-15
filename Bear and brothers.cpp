#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l=0;
    cin>>n>>m;
    while(n<=m){
            n*=3;
            m*=2;
            l++;
            if(n>m){
                cout<<l<<endl;
            }
        }

    }

