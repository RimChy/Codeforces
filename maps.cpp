#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int Q;
    cin >> Q;
    map <string,long int>m;
    long int type,Y;
    string X;

    while(Q--){
        cin >> type;
        if (type == 1)
            {
               cin >> X >> Y;
               m[X] += Y;
            }
            else if (type == 2)
            {
                cin >> X;
                m.erase (X);
            }
            else if (type == 3)
            {
                cin >> X;
                cout << m[X] << endl;
            }
    }
    return 0;
}
