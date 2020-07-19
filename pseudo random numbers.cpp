#include<bits/stdc++.h>

using namespace std;

int main(){


    int Z,I,M,L,x1,x2,n,m,caso;

    caso=1;

    while(1){
        cin>>Z>>I>>M>>L;
        if(M==0) break;

        x1=L;
        x2=L;

        m=0;

        do{
            x1=(x1*Z+I)%M;
            x2=(x2*Z+I)%M;
            x2=(x2*Z+I)%M;
            m++;
        }while(x1!=x2);

        x1=x2=L;

        for(int i=0;i<m;i++) x2=(x2*Z+I)%M;


        while(x1!=x2){
            x1=(x1*Z+I)%M;
            x2=(x2*Z+I)%M;
        }

        x2=x1;
        n=0;

        do{
            x2=(x2*Z+I)%M;
            n++;
        }while(x2!=x1);

        printf("Case %d: %d\n",caso,n);
        caso++;
    }

    return 0;
}
