#include <bits/stdc++.h>
using namespace std;
int main()
{
    char programmer[10000], judge[10000], nit[10000], dummy;
    int test_case,count, i, j,t,a, b, flag, flagg;

    while(scanf("%d", &test_case)==1)
    {   count=1;
        scanf("%c", &dummy);
        for(t=0; t<test_case; t++)
        {
            gets(programmer);
            gets(judge);

            if(!(strcmp(programmer, judge)))
                printf("Case %d: Yes\n", count);
            else
            {   flag=0;
                for(a=0, b=0; programmer[a] != '\0'; a++)
                {
                    if(!(isspace(programmer[a])))
                       {
                           nit[b]=programmer[a];
                           b++;flag=1;
                       }
                }
                nit[b]='\0';
                for(a=0, flagg=0; judge[a]!='\0'; a++)
                    if(judge[a]!=' ') flagg=1;
                if(!(strcmp(nit, judge)))
                        printf("Case %d: Output Format Error\n", count);
                else if(flag==0 && flagg==0)
                    printf("Case %d: Output Format Error\n", count);
                else printf("Case %d: Wrong Answer\n", count);
            }
            count++;
        }
    }
	return 0;

}
