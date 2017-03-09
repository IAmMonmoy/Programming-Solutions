#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct A
{
    int asci, fr;

};
A pa[1005];
bool cmp(A x, A y)
{
    if (x.fr < y.fr) return 1;
    if (x.fr == y.fr&&x.asci>y.asci) return 1;
    return 0;
}
int main()
{
    string ss;
    map<int, int>mep;
    map<int, int>::iterator it;
    bool flag=false;
    while (getline(cin,ss))
    {
        for (int i = 0; i < ss.length(); i++)
        {
            int d = (int)ss[i];
            mep[d]++;
        }
        int k = 0;
        for (it = mep.begin(); it != mep.end(); it++)
        {
            int a = it->first;
            int b = it->second;
            pa[k].asci = a;
            pa[k].fr = b;
            k++;
        }
        if(flag==true)printf("\n");
        flag=true;
        sort(pa, pa + k, cmp);
        for (int j = 0; j < k; j++) cout << pa[j].asci << " " << pa[j].fr << endl;

        mep.clear();

    }

}
