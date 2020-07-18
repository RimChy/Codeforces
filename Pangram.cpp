#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int n,i,j;
    cin>>n>>s;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }

    set<char>s1;
    for(int i=0;i<strlen(s);i++){
        s1.insert(s[i]);
    }
    if(s1.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
