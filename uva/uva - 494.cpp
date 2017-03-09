#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[100];
	while(gets(sentence)) {
		int len = strlen(sentence);
		int n = 0;
		for(int i = 0; i < len; i++) {
			if(sentence[i] == ' ') {
				if(((sentence[i-1] >= 'a' && sentence[i-1] <= 'z') || (sentence[i-1] >= 'A' && sentence[i-1] <= 'Z'))) {
					n++;
				}
				else if(!((sentence[i-1] >= 'a' && sentence[i-1] <= 'z') || (sentence[i-1] >= 'A' && sentence[i-1] <= 'Z')) &&((sentence[i-2] >= 'a' && sentence[i-2] <= 'z') || (sentence[i-2] >= 'A' && sentence[i-2] <= 'Z')))
					n++;
			}
			}
		if(!((sentence[len-1] >= 'a' && sentence[len-1] <= 'z') || (sentence[len-1] >= 'A' && sentence[len-1] <= 'Z')))
			if(!(((sentence[len-2] >= 'a' && sentence[len-2] <= 'z') || (sentence[len-2] >= 'A' && sentence[len-2] <= 'Z')) || sentence[len - 2] == ' '))
				n--;

			
			
		printf("%d\n",n+1);
		
	}
	return 0;
}
