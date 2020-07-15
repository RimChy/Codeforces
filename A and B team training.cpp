#include <iostream>
using namespace std;

int main()
{
    int n, m, t = 0;
    cin >> n >> m;
    while (n > 0 && m>0){
        if(n == 1 && m ==1) break;


        if (n < m){
            n--;
             m -= 2;
        }
        else{
            m--;
            n -= 2;
        }
        t++;
    }


    cout << t << endl;
    return 0;
}
