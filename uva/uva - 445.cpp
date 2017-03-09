#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    string s,x;

    while(getline(cin,s))
    {
        int len = s.length();
        int x = 0,sum=0,i;

        while(x < len)
        {
            sum = 0;

            if(s[x] == '!')
            {
                printf("\n");
                x++;
                continue;
            }

            if(!isalpha(s[x]) && s[x] != '*')
            {
                while(!isalpha(s[x]) && s[x] != '*')
                {
                    sum+=s[x]-'0';
                    x++;
                }
            }

            if(s[x] == 'b')
            {
                for(i=0;i<sum;i++)
                    printf(" ");
            }

            else if(isalpha(s[x]) || s[x] == '*')
            {
                for(i=0;i<sum;i++)
                    printf("%c",s[x]);
            }

            x++;

        }
        printf("\n");
    }

}
