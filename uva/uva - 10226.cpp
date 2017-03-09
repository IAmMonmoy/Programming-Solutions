#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	map<string, int> logbook;
	char name[35];

	scanf("%d\n\n", &n);
	while (n--) {
		int total = 0;

		total = 0;
		while (gets(name)) {
			if (strlen(name) == 0)
				break;

            logbook[string(name)]++;

			total++;
		}

		map<string, int>::iterator it;
		for (it = logbook.begin(); it != logbook.end(); it++) {
			printf("%s %.4f\n", (*it).first.data(),
					(double) (*it).second / (double) total * 100.0);
		}
		if (n > 0){
			printf("\n");
			logbook.clear();
		}
	}

	return 0;
}
