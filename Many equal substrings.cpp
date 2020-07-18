#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum=0;
    string s;
    cin>>n>>k>>s;

        if(s[0] == s[n-1]){
                for(i=0;i<(k-1)*n;i++){
                    sum+=s[i];
                    cout<<s<<endl;
                    break;
                }


        }
        else{
            for(i=0;i<n*k;i++){
                sum+=s[i];
                cout<<s<<endl;
                break;
            }
        }
    }


