#include<bits/stdc++.h>
#define maxx 10000005
using namespace std;
bool prime[maxx];
vector <int> v;

void sieve ()
{
    int i,j;

   // v.push_back(2);

    for (i=2; i<=maxx; i++)
        if (!prime[i])
            for (j=2; j*i<maxx; j++)
                prime[i*j] = true;

    for (i=2; i<maxx; i++)
        if (!prime[i])
            v.push_back(i);
}

int main()
{
    int n;
    cin>>n;
    sieve();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
