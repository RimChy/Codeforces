#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            n++;
        }

    }
    if(n==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
