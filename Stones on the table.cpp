#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,l=0;
    string s;
    cin>>n>>s;
      for(i=0;i<n;i++){
        if(s[i] == s[i-1]){
        l++;
    }
      }


    cout<<l<<endl;
}

