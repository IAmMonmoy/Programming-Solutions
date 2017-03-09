#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	while(scanf("%d %d %d", &a, &b, &c) == 3)
	{
		int m = c-a;
		m<b?printf("Hunters win!\n"):printf("Props win!\n");
	}
	return 0;
}
