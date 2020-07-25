#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        long long  a,flag=0;
        cin>>a;
        long long  two=0,three=0,five=0;
        while(a>1){
            if(a%2==0){
                a/=2;
                two++;
            }
            else if(a%3==0){
                a/=3;
                three++;
            }
            else if(a%5==0){
                a/=5;
                five++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<-1<<endl;

        else cout<<two+three*2+five*3<<endl;
    }
}
