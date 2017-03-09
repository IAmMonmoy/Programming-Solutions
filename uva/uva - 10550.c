#include <stdio.h>
int main()
{
    int a,b,c,d,result,x,y,z;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;

        result = 1080;
        if(a<b)
            x = (40+a-b)*9;
        else x = (a-b)*9;

        if(b < c)
            y = (c-b)*9;
        else
            y = (40+c-b)*9;

        if(c < d)
            z = (40+c-d)*9;
        else
            z=(c-d)*9;

        printf("%d\n",result+x+y+z);
    }
    return 0;
}
