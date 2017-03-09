#include <iostream>
#include <cstdio>
#include <map>
#include <sstream>
using namespace std;
int main()
{
    map<string,int>mnmy;
    string m;
    int x,a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        cin>>m>>x;
        mnmy[m] = x;
    }

    for(int j = 0; j < b; j++)
    {
        char p[100000],c;
        string finals;
        int i = 0,sum=0;
        while(c = getchar())
        {
            if(c == '.')
                break;
            p[i] = c;
            i++;
        }

        p[i] = '\0';

        stringstream x(p);

        while(x>>finals)
        {
            if(mnmy[finals])
            {
                sum+=mnmy[finals];
            }
        }

        cout<<sum<<endl;
    }
    return 0;
}
