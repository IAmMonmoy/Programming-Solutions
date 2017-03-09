#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10010;

vector<int> row[MAXN];
vector<int> val[MAXN];
int n, m, arr[MAXN];

void print() {
	printf("%d %d\n", m, n);	
	for (int i = 1; i <= m; i++) {
		int len = row[i].size();
		printf("%d", len);
		for (int j = 0; j < len; j++)
			printf(" %d", row[i][j]);
		if (len == 0)
			printf("\n\n");
		else {
			printf("\n%d", val[i][0]);
			for (int j = 1; j < len; j++)
				printf(" %d", val[i][j]);
			printf("\n");
		}
	}
}

int main() {
	while (scanf("%d%d", &n ,&m) != EOF) {
		for (int i = 0; i < MAXN; i++) {
			row[i].clear();
			val[i].clear();
		}
		int r, x;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &r);	
			for (int j = 1; j <= r; j++)	
				scanf("%d", &arr[j]);
			for (int j = 1; j <= r; j++) {
				scanf("%d", &x);
				row[arr[j]].push_back(i);
				val[arr[j]].push_back(x);
			}
		}
		print();
	}
	return 0;
}
