#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int zero_count=0,one_count=0;
        string s;
        cin>>s;
        int countt=0,indx=0;
       while(indx<=s.size()-1){
            int x=0,y=0;
            if(s[indx]=='0'){
                while(s[indx]=='0' && indx<=s.size()-1) {
                        indx++;
                    zero_count++;

                }

            }
            else{
                while(s[indx]=='1' && indx<=s.size()-1){
                    indx++;
                        one_count++;

                }

            }

           x=zero_count;
           y=one_count;
           countt+=min(x,y);
           zero_count-=min(x,y);
           one_count-=min(x,y);
          //     cout<<countt<<endl;
        }

    if(countt%2!=0) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;
    }
}
