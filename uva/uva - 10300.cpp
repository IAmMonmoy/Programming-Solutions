#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c,d,e;
    double result;
    {
        scanf("%d",&a);
        while(a--)
        {
            result=0;
            scanf("%d",&b);
            while(b--)
            {
                scanf("%d %d %d",&c,&d,&e);
                double x = float(float(c)/float(d));
                x = x*e;
                x = x*d;
                result += x;
            }
            cout<<result<<endl;
        }

    }
    return 0;
}
