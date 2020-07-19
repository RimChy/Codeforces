#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ca;
    cin>>ca;
    set<int>s;
    while(ca--)
    {
        int n,k,a;
        cin>>n>>k;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(n==k)
        {
            cout<<n<<endl;
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(k<s.size()){
                cout<<-1<<endl;
            }
            else {
                    cout<<n*k<<endl;
                    vector<int>vec,v;
            int indx=0;
            for (auto it=s.begin();it!=s.end();it++)
            {
                vec.push_back(*it);
            }

            for(int l=0;l<n;l++)
            {   int indx=0;
                for(int i=0;i<k;i++)
                {
                    if(i>=vec.size()){
                        indx=0;
                    }
                    v.push_back(vec[indx]);
                    indx++;
                }
            }
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            }

        }
        s.clear();
    }

}
