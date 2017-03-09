#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long int m,n;
    while(scanf("%lld %lld",&m,&n)==2)
        printf("%lld\n",(m*n-1));

    return 0;
}
