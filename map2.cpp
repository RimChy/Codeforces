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
        if(Map.find(c)!=Map.end())cout<<"Key "<<c<<" found"<<endl;
        else cout<<"Key "<<c<<" not found"<<endl;
    }
    return 0;
}
