#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>Map;
    for(char c='a';c<='j';c++)
    {
        int value=(int)c;
        Map[c]=value;
    }

    for(char c='a';c<='z';c++)
    {
        if(Map[c]==0)cout<<"key "<<c<<" not found"<<endl;
        else cout<<"key "<<c<<" found"<<endl;
    }

    return 0;
}

