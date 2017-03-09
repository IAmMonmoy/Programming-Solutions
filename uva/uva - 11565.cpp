#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;
bool solve(int a, int b, int c) {
	for (int i = -100; i <= 100; i++)
       for (int j = -100; j <= 100; j++)
          for (int k = -100; k <= 100; k++)
              if (i!=j && j!=k && i!=k &&
                 i+j+k == a && i*j*k == b && i*i+j*j+k*k == c) {
                     printf("%d %d %d\n",i,j,k);
                        return true;                 
						}    
	return false;
}
int main()
{
    int ntest,a,b,c;
    scanf("%d", &ntest);
    while (ntest--) {
    	scanf("%d %d %d", &a, &b, &c);
		if (!solve(a,b,c))
			printf("No solution.\n");
	 }
	return 0;
}
