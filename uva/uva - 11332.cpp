#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    char ch[100];
    int sum;
    while(scanf("%s",ch))
    {
        if(strcmp(ch,"0")==0)
            break;
        int len = strlen(ch);
        while(len > 1)
        {
            sum=0;
             for(int i=0;ch[i];i++)
                sum+=(ch[i] -'0');
            stringstream ss;
            ss<<sum;
            ss>>ch;
            len = strlen(ch);
        }
        printf("%s\n",ch);
    }
    return 0;
}
