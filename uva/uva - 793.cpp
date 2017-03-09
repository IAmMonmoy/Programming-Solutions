#include <bits/stdc++.h>
using namespace std;
class uf
{
	vector<int>p,rank;
	public:
		uf(int n)
		{
			rank.assign(n,0);
			p.assign(n,0);
			for(int i = 0; i < n; i++)
				p[i]=i;
		}
		int findset(int i)
		{
			return (i == p[i]) ?  i :  findset(p[i]);
		}	
			
		bool issameset(int i, int j)
		{
			return findset(i)==findset(j);
		}
		
		void unionset(int i , int j)
		{
			int x = findset(i), y=findset(j);
			int m = findset(x), n=findset(y);
			if(x != y)
			{
				if(rank[x] > rank[y])
				{
					p[y]=x;
				}
				else
				{
					p[x]=y;
					if(rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
		
};
int main()
{
	int a, n, yes, no,flag=0;
	char line[1000], q;
	int c1, c2;

	scanf("%d\n", &a);
	while (a--) {
		
		yes = no = 0;
		scanf("%d\n\n", &n);
		uf set(n);

		while (true) {
			gets(line);
			if (strcmp(line, "") == 0 || feof(stdin)) break;
			sscanf(line, "%c %d %d", &q, &c1, &c2);
			c1--;
			c2--;
			if (q == 'c') {
				set.unionset(c1, c2);
			} else if (q == 'q') {
				if (set.issameset(c1, c2))
					yes++;
				else
					no++;
			}
		}
		
		if(flag)
			printf("\n");
		flag = 1;
		printf("%d,%d\n", yes, no);
	}

	return 0;
}

