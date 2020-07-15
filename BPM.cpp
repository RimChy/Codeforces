#include<bits/stdc++.h>
using namespace std;
vector<int>BP_Graph[1010];
int matchR[1010];
int vis[1010];
//bool bpm (bool bpGraph[M][N], int i, bool seen[], int matchR[])
//{
//    for(int j=0; j<N; j++)
//    {
//        if (bpGraph[i][j] && !seen[j])
//        {
//            seen[j]=true;
//
//            if(matchR[j]<0 ||bpm(bpGraph, matchR[j], seen, matchR) )
//            {
//                matchR[j]=i;
//                return true;
//            }
//        }
//    }
//    return false;
//}
bool BPM(int u)
{
    for(int i=0; i<BP_Graph[u].size(); i++)
    {
        int job=BP_Graph[u][i];
        if(!vis[job])
        {
            vis[job]=1;
        if(matchR[job]==-1 || BPM(matchR[job]))
        {
            matchR[job]=u;
            return true;
        }
    }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        BP_Graph[u].push_back(v);
    }
    memset(matchR, -1, sizeof matchR);

    int  ans=0;
    for(int i=1; i<=n; i++)
    {
        memset(vis,0, sizeof vis);
        if(BPM(i)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
