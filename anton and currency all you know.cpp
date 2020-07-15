#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

     int n=s.size()-1,x=n;
    for(int i=0;i<n;i++){
        int a=s[i]-'0';
        if(a%2==0){
                x=i;
            if(s[n]>s[i]){

                break;
            }

        }
    }
        if(n==x){cout<<-1<<endl;}
        else {
            swap(s[x],s[n]);
            cout<<s<<endl;
        }



}
