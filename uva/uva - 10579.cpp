#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b)
{
    string p,q;
    int carry;
    int x = a.length(), y = b.length();

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i = 0, carry = 0; i<x || i<y || carry; i++ ) {
            carry+=(i<x ? a[i]-48 : 0)+(i<y ? b[i]-48 : 0);
            p += ((carry % 10) + 48);
            carry /= 10;
        }

    reverse(p.begin(),p.end());

    return p;
}

int main()
{
    string x[5010];
    int p;
    x[0] = "0",x[1] = "1",x[2] = "1";

    for(int i = 3; i <= 5000; i++)
    {
        x[i] = sum(x[i-1],x[i-2]);
    }

    while(cin>>p)
    {
       printf("The Fibonacci number for %d is %s\n",p,x[p].c_str());
    }

    return 0;
}
