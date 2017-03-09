#include <bits/stdc++.h>
using namespace std;
int main()
{
    int max=0,min=0,x;
    char input[30];

    while(scanf("%d", &x) == 1)
    {
        if(x == 0)
            break;

        getchar();
        gets(input);

        if(strcmp(input,"right on") == 0)
        {
            if(max == 0)
                max = 11;

            if(x < max && x > min)
                printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");

            max = 0,min = 0;
        }

        else if(strcmp(input,"too high") == 0)
        {
             if(max == 0)
                max = x;
             else if(x < max)
                max = x;
        }

        else if(strcmp(input,"too low") == 0)
        {
            if(min == 0)
                min = x;
             else if(x > min)
                min = x;
        }
    }
    return 0;
}
