#include<bits/stdc++.h>
using namespace std;
int count_occurrences(int arr[], int n, int x)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}

int main()
{
    int n,a,b,c,d,x[100000],y[100000],l=0;
    vector<int>v;
    set<int>s;
    set<int>::iterator it;
    cin>>n;
    while(n--){
        cin>>a;
        for(int i=0;i<a;i++){
            cin>>x[i];
            //v.push_back(x);
             s.insert(x[i]);
            }


    }
    //sort(v.begin(),v.end());

        int m = sizeof(x)/sizeof(x[0]);

       for(it=s.begin();it != s.end();++it){
            //for(int i=0;i<v.size();i++){
        /*if(*it == v[i]){
            l++;
            cout<<l<<" ";
        }

    }*/
    l=count_occurrences(x,m,*it);
    if(l==n){
        cout<<*it<<" ";
    }



    }






}
