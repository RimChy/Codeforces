#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    list<string>l;
    list<string>l1;
    cin>>s;
    l.push_back(s);
    list<string>::iterator it = l.begin();
       l1 = l.unique(s);
      int y = l1.size();
    if(y % 2 == 0){
        cout<<"CHAT WITH HER"<<endl;
    }
    else{
        cout<<"IGNORE HIM"<<endl;
    }
}

