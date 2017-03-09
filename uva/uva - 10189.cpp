#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
    int a,b,i,j,cases=0;
    char ara[200][200];

    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b == 0)
            break;

        ++cases;

        if(cases > 1)
            cout<<endl;

        for(i = 1; i <= a ; i++)
        {
            for(j = 1 ; j <= b ; j++)
            {
                cin>>ara[i][j];
            }
        }

        for(i=0;i<=0;i++)
        {
            for(j=0;j<=a+1;j++)
                ara[i][j] = '.';
        }

        for(i=0;i<=0;i++)
        {
            for(j=0;j<=b+1;j++)
                ara[j][i] = '.';
        }

        for( i = a+1; i <= a+1; i++)
        {
            for(j=0;j<=b+1;j++)
                ara[i][j] = '.';
        }

        for(i = b+1; i <= b+1; i++)
        {
            for(j=0;j<=a+1;j++)
                ara[j][i] = '.';
        }

        int count;

        cout<<"Field #"<<cases<<":"<<endl;

        for(i = 1; i <= a; i++)
        {

            for(j = 1; j <= b; j++)
            {

                count = 0;

                if(ara[i][j] == '*')
                    continue;
                if(ara[i-1][j] == '*')
                    count++;
                if(ara[i+1][j] == '*')
                    count++;
                if(ara[i][j-1] == '*')
                    count++;
                if(ara[i][j+1] == '*')
                    count++;
                if(ara[i-1][j-1] == '*')
                    count++;
                if(ara[i+1][j+1] == '*')
                    count++;
                if(ara[i+1][j-1] == '*')
                    count++;
                if(ara[i-1][j+1] == '*')
                    count++;
                ara[i][j] = count + '0';
            }
        }

        for(i = 1; i <= a ; i++)
        {
            for(j = 1 ; j <= b ; j++)
            {
                cout<<ara[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}
