#include <bits/stdc++.h>
using namespace std;
int main() {
	double a,b,c,d,x1,x2,x3,x4;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a, &x1, &b, &x2, &c, &x3, &d, &x4) == 8) {
		if(a == c && x1 == x3)
			printf("%.3lf %.3lf\n", (b+d)-a, (x2+x4)-x1);
		else if(a == d && x1 == x4)
			printf("%.3lf %.3lf\n", (b+c)-a, (x2+x3)-x1);
		else if(b == c && x2 == x3)
			printf("%.3lf %.3lf\n", (a+d)-b, (x1+x4)-x2);
		else
			printf("%.3lf %.3lf\n", (a+c)-b, (x1+x3)-x2);
	}

}
