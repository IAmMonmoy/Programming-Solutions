#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int ara[1005],n,x,m;
    double sum,y;
    cin>>m;
    while(m--)
    {
        sum=0,y=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ara[i] > (sum/n))
                y++;
        }
        cout <<setprecision(3)<<fixed<<((y/float(n)) * 100);
        cout<<"%"<<endl;
    }
    return 0;
}
