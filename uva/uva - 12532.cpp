/*Author : Rajob Raihan Monmoy
Date : 25/12/2015
Email : iammonmoy@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
int ara[100010];
int tree[3*100010];
void make_tree(int node, int fst , int lst)
{
	if(fst == lst)
	{
		if(ara[fst] > 0)
			tree[node]=1;
		else if(ara[fst] < 0)
			tree[node]=-1;
		else tree[node]=0;
		return;
	}
	
	int mid = (fst+lst)>>1;
	int left = node<<1;
	int right = left+1;
	
	make_tree(left,fst,mid);
	make_tree(right,mid+1,lst);
		
	tree[node]=tree[left]*tree[right];
}
void chng(int node, int fst, int lst, int i, int val)
{
	if(fst == i && lst == i)
	{
		if(val > 0)
			tree[node]=1;
		else if(val < 0)
			tree[node]=-1;
		else tree[node]=0;
		
		return;
	}
	if(i < fst || i > lst)
		return;
	int mid = (fst+lst)>>1;
	int left = node<<1;
	int right = left+1;
	
	chng(left,fst,mid,i,val);
	chng(right,mid+1,lst,i,val);
	
	tree[node] = tree[left]*tree[right];
}
int ans(int node, int fst, int lst, int i, int j)
{
	if(fst>= i && lst <= j)
		return tree[node];
		
	if(i>lst || j < fst)
		return 1;
	int mid = (fst+lst)>>1;
	int left = node<<1;
	int right = left+1;
	int p =  ans(left,fst,mid,i,j);
	int q = ans(right,mid+1,lst,i,j);
	return p*q;
}
int main()
{
	int n,k,x,y;
	char c[10];
	while(scanf("%d %d", &n, &k) == 2)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &ara[i]);
		make_tree(1,0,n-1);
		string res = "";
		for(int i = 0; i < k; i++)
		{
			scanf("%s",c);
			if(c[0] == 'C')
			{
				scanf("%d %d", &x, &y);
				chng(1,0,n-1,x-1,y);
			}
			else if(c[0] == 'P')
			{
				scanf("%d %d", &x, &y);
				int an = ans(1,0,n-1,x-1,y-1);
				if(an == 0)
					res+='0';
				else if(an < 0)
					res+='-';
				else res+='+';
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
