#include<iostream>
#include<stack>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    stack <long int>m;
    long int type,Y,X;
    for(int i=0;i<n;i++){
        cin>>type;
        if(type == 1){
            cin>>X;
            if(m.empty()){
                m.push(X);
            }
            else {
                m.push(max(X,m.top()));
            }

        }
        else if(type == 2){

                if(!m.empty())
        m.pop();
        }
        else if(type == 3){
            cout<<m.top()<<endl;;
        }

        }
        return 0;
    }
