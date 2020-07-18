#include <bits/stdc++.h>
using namespace std;

int mod;

int multi(long long a[2][2], long long b[2][2], long long result[2][2])
{

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			result[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				result[i][j] = (result[i][j] % mod + (a[i][k] * b[k][j]) % mod ) % mod;
			}
		}
	}

}
long long expo(long long z[2][2], long long result[2][2], long long n)
{
	long long temp[2][2];

	result[0][0] = 1;
	result[0][1] = 0;
	result[1][0] = 0;
	result[1][1] = 1;

	while(n) {

		if(n % 2) {

			multi(result, z, temp);

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					result[i][j] = temp[i][j];
				}
			}
		}

		multi(z, z, temp);

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				z[i][j] = temp[i][j];
			}
		}

		n = n / 2;
	}
}

int main()
{

	long long z[2][2],inp[2][2],result[2][2],k;
	int t,a,b,l,c=1;


	cin>>t;


	while(t--) {

		z[0][0] = 1;
		z[0][1] = 1;
		z[1][0] = 1;
		z[1][1] = 0;

		cin>>a>>b>>k>>l;

		mod = pow(10, l);


       cout<<"Case "<<c++<<": ";
		k++;
		if(k == 1) {
			a = a % mod;

			cout<<a<<endl;
			continue;
		}

		if(k == 2) {
			b = b % mod;

			cout<<b<<endl;
			continue;
		}


		a = a % mod;
		b = b % mod;

		expo(z, result, k - 2);
		cout<<(((result[0][0] * b) % mod + (result[0][1] * a) % mod) % mod)<<endl;
	}


}
