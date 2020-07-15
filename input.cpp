#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    srand(time(0));
    while(t--){
       cout<<rand()%(31-1)+1<<" "<<rand()%(13-1)+1<<endl;
       int n=rand()%(1001-1)+1;
       cout<<rand()%(1001-1)+1<<" "<<n<<endl;
       for(int i=1;i<=n;i++){
        cout<<i<<" "<<rand()%(31-1)+1<<" "<<rand()%(13-1)+1<<endl;
       }

    }
}
