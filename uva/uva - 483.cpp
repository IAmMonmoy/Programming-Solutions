#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[1000];
	int len,i,j,l;
	
	while(gets(sentence)) {
		l=-1;
		len = strlen(sentence);
		for(i = 0; i < len; i++) {
			if(sentence[i] == ' ') {
				for(j = i-1;j > l;j--) 
					printf("%c",sentence[j]);
					l = i;
				printf(" ");
			}
		}
		for(i = len-1; i > l; i--)
			printf("%c", sentence[i]);
		printf("\n");
	}
		
   return 0;
}
