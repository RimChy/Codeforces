#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    unsigned long long a;

    cin>>n>>m;
    if(n>m || n>29){
        cout<<m<<endl;
    }
    else{
        a= pow(2,n);
        cout << m % a<<endl;
    }




}
