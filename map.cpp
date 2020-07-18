#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>Map;
    map<char,int>::iterator it;
    for(char c='a';c<='j';c++)
    {
        int value=(int)c;
        Map[c]=value;
    }

    cout<<"Map size: "<<Map.size()<<endl;

    cout<<"Map key value: \n";
    for(it=Map.begin();it!=Map.end();it++)
    {
        cout<<"Key-> "<<(*it).first<<" value-> "<<(*it).second<<endl;
    }

    cout<<"Key a value: "<<Map['a']<<endl;

    if(Map.find('a')!=Map.end())cout<<"key 'a' found"<<endl;
    else cout<<"key 'a' not found"<<endl;

    if(Map.find('z')!=Map.end())cout<<"key 'z' found"<<endl;
    else cout<<"key 'z' not found"<<endl;

    Map.clear();

    cout<<"Is map empty: "<<Map.empty()<<endl;

    return 0;
}
