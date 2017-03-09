#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[110],b[110];
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		map<string,string>fst;
		map<string,string>nw;
		map<string,string>::iterator it;
		gets(a),gets(b);
		int len = strlen(a);
		int len1 = strlen(b);
		
		
		for(int i = 0; i < len; i++)
		{
			if(isalpha(a[i]))
			{
				string x,y;
				while(i<len && isalpha(a[i]))
				{
					x+=a[i];
					i++;
				}
				i++;
				int sum = 0;
				while(i<len && isdigit(a[i]))
				{
					y+=a[i];
					i++;
				}
				fst[x]=y;
			}
		}
		
		for(int i = 0; i < len1; i++)
		{
			if(isalpha(b[i]))
			{
				string x,y;
				while(i<len1 && isalpha(b[i]))
				{
					x+=b[i];
					i++;
				}
				i++;
				int sum = 0;
				while(i<len1 && isdigit(b[i]))
				{
					y+=b[i];
					i++;
				}
				nw[x]=y;
			}
		}
		vector<string>nwk;
		vector<string>rmv;
		vector<string>chg;
		for(it = nw.begin(); it != nw.end(); ++it)
		{
			if(fst[it->first] == "")
				nwk.push_back(it->first);
			else if(fst[it->first] != "" && fst[it->first] != it->second)
				chg.push_back(it->first);
		}
		for(it = fst.begin(); it != fst.end(); ++it)
		{
			if(nw[it->first] == "")
				rmv.push_back(it->first);
		}
		if(nwk.empty() && rmv.empty() && chg.empty())
		{
			printf("No changes\n\n");
			continue;
		}
		if(nwk.size() > 0)
		{
			printf("+");
			for(int i = 0; i < nwk.size()-1; i++)
			{
				cout<<nwk[i]<<",";
			}
			cout<<nwk[nwk.size()-1]<<endl;
		}
		
		if(rmv.size() > 0)
		{
			printf("-");
			for(int i = 0; i < rmv.size()-1; i++)
			{
				cout<<rmv[i]<<",";
			}
			cout<<rmv[rmv.size()-1]<<endl;
		}
		
		if(chg.size() > 0)
		{
			printf("*");
			for(int i = 0; i < chg.size()-1; i++)
			{
				cout<<chg[i]<<",";
			}
			cout<<chg[chg.size()-1]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
