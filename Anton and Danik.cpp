#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0,y=0;
    string s;
    cin>>n>>s;
    for(i=0;i<s.length();i++){
        if(s[i] == 'A'){
            x++;
        }
        else{
            y++;
        }

    }
    if(x > y){
        cout<<"Anton"<<endl;
    }
    else if(x < y){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}
