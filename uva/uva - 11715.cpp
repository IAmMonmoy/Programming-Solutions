#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int a,cases=0;
    double b,c,d,x,y;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        scanf("%lf %lf %lf",&b,&c,&d);
        if(a==1)
        {
            x = ((c-b)/d);
            y = ((c*c)-(b*b))/(2*x);
            printf("Case %d: %0.3lf ",++cases,y);
            printf("%0.3lf\n",x);
        }
        else if(a==2)
        {
            x = (c-b)/d;
            y = ((c*c)-(b*b))/(2*d);
            printf("Case %d: %0.3lf ",++cases,y);
            printf("%0.3lf\n",x);
        }
        else if(a==3)
        {
            x=sqrt(b*b+2*c*d);
            y = (x-b)/c;
            printf("Case %d: %0.3lf ",++cases,x);
            printf("%0.3lf\n",y);
        }
        else if(a==4)
        {
            x = sqrt(b*b-2*c*d);
            y = (b-x)/c;
            printf("Case %d: %0.3lf ",++cases,x);
            printf("%0.3lf\n",y);
        }
    }
    return 0;
}
