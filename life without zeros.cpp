#include<bits/stdc++.h>
using namespace std;
int zeros(int num) {
        int ret = 0;
        int ten = 1;
        while (num) {
                int dig = num % 10;
                num /= 10;
                if (dig) {
                        ret += dig * ten;
                        ten *= 10;
                }
        }
        return ret;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(zeros(a)+zeros(b)==zeros(c)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

