#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=0,y=0,z=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') x++;
            else if(s[i]=='2') y++;
            else z++;
        }
        if(x==0 || y==0 || z==0) cout<<0<<endl;
  else{
        string pat="123";

    int hash_pat[200000] = {0};
    int hash_str[200000] = {0};

    for (int i = 0; i < pat.size(); i++)
        hash_pat[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;


    int count = 0;
    for (int j = 0; j < s.size() ; j++)
    {
        hash_str[s[j]]++;

        if (hash_pat[s[j]] != 0 &&
            hash_str[s[j]] <= hash_pat[s[j]] )
            count++;


        if (count == pat.size())
        {

            while ( hash_str[s[start]] > hash_pat[s[start]]
                || hash_pat[s[start]] == 0)
            {

                if (hash_str[s[start]] > hash_pat[s[start]])
                    hash_str[s[start]]--;
                start++;
            }


            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }



    cout<<min_len<<endl;
}
    }

}
