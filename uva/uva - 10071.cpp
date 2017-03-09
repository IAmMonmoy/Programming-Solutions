#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double a,b,x;
    while(scanf("%lf %lf", &a , &b) == 2)
    {
        if(a==0 || b == 0)
        {
            cout<<0<<endl;
            continue;
        }
        x = a/b;
        cout<<((b*2)*(b*2)*x)/2<<endl;
    }
    return 0;
}
