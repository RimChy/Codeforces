#include<bits/stdc++.h>
using namespace std;

bool parenthesis(string exp)
{
    stack<char> s;
    char x;


    for (int i=0; i<exp.length(); i++)
    {
        if (exp[i]=='('||exp[i]=='['||exp[i]=='{')
        {

            s.push(exp[i]);
            continue;
        }

        if (s.empty())
           return false;

        switch (exp[i])
        {
        case ')':


            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;

        case '}':


            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;

        case ']':


            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }


    return (s.empty());
}


int main()
{ int n;
cin>>n;
    string exp;

   while(n--){
   cin >> exp;
    if (parenthesis(exp))
        cout << "YES\n";
    else
        cout << "NO\n";
   }
    return 0;
}
