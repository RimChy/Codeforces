#include <bits/stdc++.h>

using namespace std;

vector<char>s;
int N, mark[100];
char st[100], ans[100];

void permutation(int n)
{
    if(n==0)
    {
        for(int i = 0; i < s.size(); i++)
            cout << s[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 0; i < N; i++)
    {
        if(!mark[i])
        {
            s.push_back(st[i]);
            mark[i] = 1;
            permutation(n-1);
            s.pop_back();
            mark[i] = 0;
        }
    }
}
int main()
{
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> st[i];
    permutation(N);

    return 0;
}

