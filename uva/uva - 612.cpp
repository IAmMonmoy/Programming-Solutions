#include <bits/stdc++.h>
#define gc getchar_unlocked
using namespace std;
int getint() 
{ unsigned int c; int x = 0; while (((c = gc()) - '0') >= 10) { if (c == '-') return -getint(); if (!~c) exit(0); } do { x = (x << 3) + (x << 1) + (c - '0'); } while (((c = gc()) - '0') < 10); return x; }
int getstr(char *s) { int c, n = 0; while ((c = gc()) <= ' ') { if (!~c) exit(0); } do { s[n++] = c; } while ((c = gc()) > ' ' ); s[n] = 0; return n; }
using namespace std;
struct mnmy
{
	int n;
	int x;
	char nam[55];
};
bool compare(const mnmy a, const mnmy b)
{
	if(a.x == b.x)
		return a.n < b.n;
	return a.x < b.x;
}
int main()
{
	int a,b,t;
	char c[200][200];
	t = getint();
	for(int cas = 0; cas < t; cas++)
	{
		a=getint(),b=getint();
		getchar();
		for(int i = 0; i < b; i++)
			getstr(c[i]);
		
		
		mnmy mn[110];
		
		for(int i = 0; i < b; i++)
		{
			int cnt = 0;
			for(int j = 0; j < a; j++)
			{
				for(int k = j+1; k < a; k++)
				{
					if(c[i][j] > c[i][k])
						cnt++;
				}
			}
			
			mn[i].x=cnt;
			mn[i].n = i;
			strcpy(mn[i].nam,c[i]);
		}
		
		sort(mn,mn+b,compare);
		
		if(cas)
			printf("\n");
		
		
		for(int i = 0; i < b; i++)
			printf("%s\n",mn[i].nam);
			
	}
	return 0;
}
