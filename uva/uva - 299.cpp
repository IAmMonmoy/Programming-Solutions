#include <stdio.h>
int main()
{
    int testcase,numbers,ara[100],ans;
    scanf("%d",&testcase);
    while(testcase--)
    {
        ans = 0;
        scanf("%d",&numbers);
        for(int i=0;i<numbers;i++)
            scanf("%d",&ara[i]);
        for(int i=0;i<numbers;i++)
        {
            for(int j=0;j<numbers-1;j++)
            {
                if(ara[j] > ara[j+1])
                {
                    int temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                    ans++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
    return 0;
}
