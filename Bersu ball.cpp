#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c=0;
    cin >> n;
    int a[n+1];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m+1];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 120;
                c++;
                break;
            }

    cout << c << endl;

}
