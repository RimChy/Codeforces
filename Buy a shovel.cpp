#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,a;
    cin>>k>>r;
    for(int i=1;;i++){
            if(k*i % 10 == 0){
                cout<<i<<endl;
                return 0;
            }

        else if(((k*i)%10)==r){
            cout<<i<<endl;
            return 0;
        }
    }
}
