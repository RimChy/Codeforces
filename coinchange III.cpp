#include <cstdio>
#include <cstring>

int coin[101], c[101], dp[100001], arr[100001];

int main() {
	int test, cs, n, m, i, j, ans, cv, ct;
	scanf("%d", &test);
	for(cs = 1; cs <= test; cs++) {
		scanf("%d %d", &n, &m);
		for(i = 0; i < n; i++) scanf("%d", &coin[i]);
		for(i = 0; i < n; i++) scanf("%d", &c[i]);

		memset(dp, 0, sizeof dp);

		for(i = 0, dp[0] = 1; i < n; i++) {
			cv = coin[i], ct = c[i];
           memset(arr, 0, sizeof arr);
			for(j = cv; j <= m; j++) {
				if(!dp[j] && arr[j-coin[i]] < c[i]) {
					arr[j] = arr[j-coin[i]] + 1;
					dp[j] |= dp[j-c[i]];
				}
			}
		}
		for(i = 1, ans = 0; i <= m; i++) ans += dp[i];
		printf("Case %d: %d\n", cs, ans);
	}
	return 0;
}
