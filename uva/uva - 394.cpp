#include <bits/stdc++.h>
using namespace std;
struct m
{
	int p;
	int q;
};
struct mn
{
	int base;
	int byte;
	int dim;
	m a[11];	
};
int main()
{
	int a,b,base,byte,dim,c,d;
	char x[20],y[20];
	scanf("%d %d", &a, &b);
	map<string, int>mp;
	int cnt=0;
	mn mnmy[11];
	for(int i = 0; i < a; i++)
	{
		scanf("%s",x);
		mp[x]=i;
		scanf("%d %d %d", &base, &byte, &dim);
		mnmy[i].base=base;
		mnmy[i].byte=byte;
		mnmy[i].dim=dim;
		
		for(int j = 0; j < dim; j++)
		{
			scanf("%d %d", &c, &d);
			mnmy[i].a[j].p=c;
			mnmy[i].a[j].q=d;
		}
	}

	for(int i = 0; i < b; i++)
	{
		scanf("%s",y);
		int p = mp[y];
		int base = mnmy[p].base;
		int byte = mnmy[p].byte;
		int dim = mnmy[p].dim;
		int dims[12];
		for(int i = 0; i < dim; i++)
			scanf("%d", &dims[i]);
		
		int l[11],e[11];
		for(int j = 0; j < dim; j++)
			l[j]=mnmy[p].a[j].q-mnmy[p].a[j].p+1;
			
	
		for(int j = 0; j < dim; j++)
			e[j] = dims[j]-mnmy[p].a[j].p;
			
		
		e[dim]=0,l[dim]=1;
		int result = e[0]*l[1];
		int cnt=1,cnt1=2;
		for(int j = 1; cnt < dim || cnt1 < dim; j++)
		{
			if(j&1)
			{
				result+=e[cnt];
				cnt++;
			}
				
			else
			{
				result*=l[cnt1];
				cnt1++;
			}
		}

		result=(mnmy[p].base+(mnmy[p].byte*result));

		printf("%s[",y);
		for(int j = 0; j < dim-1; j++)
			printf("%d, ",dims[j]);
		printf("%d] = %d\n",dims[dim-1],result);
	}
	
	
	return 0;
}
