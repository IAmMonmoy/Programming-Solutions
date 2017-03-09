#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int func(int a)
{
    int s=0;
    while(a != 0)
    {
        s+=a%10;
        a/=10;
    }
    if(s > 9)
        s = func(s);

    return s;
}
int main()
{
    char ch[30],ch1[30];
    double result,result1;

    while(gets(ch))
    {
        gets(ch1);

        int sum=0,sum1=0;

         for(int i=0;ch[i] !='\0';i++)
            if(isalpha(ch[i]))
            {
                ch[i]=tolower(ch[i]);
                sum += ch[i]+1-'a';
            }

            sum1 = func(sum);

         int sum2=0,sum3=0;

         for(int i=0;ch1[i] !='\0';i++)
            if(isalpha(ch1[i]))
            {
                ch1[i]=towlower(ch1[i]);
                 sum2 += ch1[i]+1-'a';
            }

            sum3 = func(sum2);

            char x = '%';
         if(sum3 <= sum1)
         {
            result = float(float(sum3)/float(sum1))*100;
            printf("%0.2lf %c\n",result,x);
         }

         else
         {
            result = float(float(sum1)/float(sum3))*100;
            printf("%0.2lf %c\n",result,x);
         }
    }
    return 0;
}
