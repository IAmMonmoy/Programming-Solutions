#include <stdio.h>
int main()
{
    int a,b,c,d,minute;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        if(d<b)
        {
            minute = d+60-b;
            a++;
        }
        else
            minute = d-b;
        if(c < a)
            c+=24;
        printf("%d\n",(c-a)*60+minute);
    }
    return 0;
}
