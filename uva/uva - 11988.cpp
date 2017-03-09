#include <bits/stdc++.h>
using namespace std;
int main () {
        char x[100000+1];
        while (scanf("%s", x) != EOF) 
		{
            list<char> carlist;
            list<char>::iterator it=carlist.begin();
            int n=strlen(x);
            for(int i=0;i<n;i++) {
                if (x[i] == '[')
                    it = carlist.begin();
                else if (x[i] == ']')
                    it = carlist.end();
                else
                    carlist.insert(it, x[i]);
            }
            for (it = carlist.begin(); it != carlist.end(); it++)
                printf("%c", *it);
                
            printf("\n");
        }

       return 0;
    }
