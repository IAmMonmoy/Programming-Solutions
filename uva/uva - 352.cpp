#include <bits/stdc++.h>
using namespace std;
int a,len;
char x[30][30];
int fx[]={1,-1,0,0,-1,-1,1,1};
int fy[]={0,0,1,-1,-1,1,-1,1};
void floodfill(int p,int q)
{
	if(p >= a || q >= len || x[p][q] != '1')
		return;
		
	x[p][q]='0';
	
	for(int i = 0; i < 8; i++)
	{
		int k = p + fx[i];
		int l = q + fy[i];
		floodfill(k,l);
	}
	return;
}
int main()
{
	int cases=0;
	while(scanf("%d", &a) == 1)
	{
		int count = 0;
		for(int i = 0; i < a; i++)
			scanf("%s",x[i]);
			
		len = strlen(x[0]);
		
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < len; j++)
			{
				if(x[i][j] == '1')
				{
					count++;
					floodfill(i,j);
				}
			}
		}
		
		printf("Image number %d contains %d war eagles.\n",++cases,count);
	}
	return 0;
}
