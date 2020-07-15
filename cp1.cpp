#include<bits/stdc++.h>

using namespace std;
int main()

{
 int  t,i,x=0,y=0,c=1;
 cin>>t;
getchar();
 string s,s1;
 while(t--){
    getline(cin,s);
     for(int  j = 0; s[j]; j++ ){

           if(s[j]>='A' && s[j]<='Z')
            s[j]=s[j]-'A'+'a';
           if(s[j]!=' ') x += s[j];
       }
      // cout<<x;
    getline(cin,s1);
    for(int  j = 0; s1[j]; j++ ){
           if(s1[j]>='A' && s1[j]<='Z')
            s1[j]=s1[j]-'A'+'a';
           if(s1[j]!=' ') y += s1[j];
       }
      // cout<<y;


      cout<<"Case "<<c++<<": ";





       if(x== y){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
       x=0,y=0;


 }
}
