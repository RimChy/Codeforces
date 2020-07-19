
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>S;
    set<int>::iterator it;
    for(int i=1;i<100;i++)
    {
        S.insert(i%10);
    }

    cout<<"Set size: "<<S.size()<<endl;

    cout<<"Set element: ";
    for(it=S.begin();it!=S.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    set<int>::iterator it1,it2;

    it1=S.find(4);
    it2=S.find(7);

    S.erase(it1,it2);

    cout<<"Set element after erase 4 to 6: ";
    for(it=S.begin();it!=S.end();it++)cout<<(*it)<<" ";
    cout<<endl;

    S.clear();

    cout<<"Is set empty: "<<S.empty()<<endl;

    return 0;
}
