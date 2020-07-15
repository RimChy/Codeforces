#include<bits/stdc++.h>
#include<string>
#include<set>
using namespace std;
int main()
{
    int i,j;
    char a[100];
    cin>>a;

    set<char>s;

    for(i=0;i<strlen(a); i++)
    {
        s.insert(a[i]);
    }

    j = s.size();
    if(j % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }


}
