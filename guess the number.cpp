#include <bits/stdc++.h>
using namespace std;


int main() {
    int l = 1, r = 1000000,p=0,x=1,y=1;
    int mid = (l + r + 1) / 2;
    while (p<25) {

        string s;
        cin>>s;
        if (s == "<"){
            cout<<mid+x<<endl;
            cout<<flush;
            x++;
        }
        else{
            cout<<mid-y<<endl;
            cout<<flush;
            y++;
        }
    }

    printf("! %d\n", mid);
    fflush(stdout);
}
