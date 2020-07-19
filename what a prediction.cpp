#include<bits/stdc++.h>
using namespace std;

int main()
{

     int i,j,n;
       string p,s;
       map<string,string>m;

    cin>>n;
    while(n--){
        cin>>s>>p;
        for(i = 0;i < sizeof(s);i++){
            if(s[i]++ == p){
                printf("0\n");
            }
        }
    }

}
