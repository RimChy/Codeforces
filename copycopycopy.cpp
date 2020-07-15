#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;

    while(t--){
        cin>>a;
        int arr[a+1];
        set<int> s;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        cout<<s.size()<<endl;
        s.clear();

    }
}
