#include <bits/stdc++.h>


using namespace std;

int main()
{

 int t,c=1,a,n,m;

 cin>>t;
 while(t--){
        cin>>n>>m;
   deque<int>que;
      string s;
        cout << "Case " << c++ << ":"<<endl;
        for (int i = 0; i < m; i++) {
            cin>>s;

            if(s == "pushLeft" or s == "pushRight") {
                cin >>a ;
                if(que.size() == n) {
                    cout << "The queue is full"<<endl;
                }

                else {
                    if(s == "pushLeft") {
                        cout << "Pushed in left: " << a << endl;
                        que.push_front(a);
                    }


                    if(s == "pushRight") {
                        cout << "Pushed in right: " << a << endl;
                        que.push_back(a);
                    }
                }

            }

            if(s == "popLeft" or s == "popRight") {
                if(que.size() == 0) {
                    cout << "The queue is empty"<<endl;
                }

                else {
                    if(s == "popLeft") {
                        cout << "Popped from left: " << que.front() << endl;
                        que.pop_front();
                    }

                    if(s == "popRight") {
                        cout << "Popped from right: " << que.back() << endl;
                        que.pop_back();
                    }

                }

            }


        }



    }


}
