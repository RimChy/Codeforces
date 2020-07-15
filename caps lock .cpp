#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,l=0;
    string s,str;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') {l++;
        str[i]=s[i]-'A'+'a';
        }

    }

   if(s[0]>='a' && s[0]<='z' && l==s.size()-1 ) {
      str[0]=s[i]-'a'+'A';
      cout<<str<<endl;
   }
      else if (s[0]>='A' && s[0]<='Z' && l==s.size()-1) {
          str[0]=s[0];
          cout<<str<<endl;
      }

    else cout<<s<<endl;

}
