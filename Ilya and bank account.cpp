#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        int a=n/10;
        int b=n%10;
        int c=a%10;
        if(abs(b)<=abs(c)){
            int x=abs(a)-abs(c)+abs(b);
            cout<<-x<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }

}
