#include <stdio.h>
#include <string.h>
int main()
{
	char sentence[100];
	int len,i,j,m;
	
	while(gets(sentence))
	{
		m = -1,len=0;
		len = strlen(sentence);
		
		for(i = 0; i < len; i++) {
			m++;
			if(!(sentence[i] >= 65 && sentence[i] <= 90 || sentence[i] >= 97 && sentence[i] <= 122)) {
				if(sentence[i-m] == 'a' || sentence[i-m]=='e' || sentence[i-m] == 'i' || sentence[i-m] == 'o' || sentence[i-m] == 'u' || sentence[i-m] == 'A' || sentence[i-m] == 'E' || sentence[i-m] == 'I'||sentence[i-m] == 'O' || sentence[i-m] == 'U')
				{
					for(j = i-m; j < i;j++) {
						printf("%c",sentence[j]);
					}
					printf("%s%c","ay",sentence[i]);
					m=-1;
				}
				else
				{
					for(j = i-m+1; j < i; j++) {
						printf("%c", sentence[j]);
					}
					printf("%c%s%c",sentence[i-m],"ay",sentence[i]);
					m = -1;
				}
			}
		}
		
		for(i = len-m-1; i < len; i++) {
			if(!(len-1 >= 'a' && len - 1 <= 'z' || len-1 >= 'A' && len-1 <= 'Z'))
				printf("%c",sentence[i]);
		}
	return 0;
	}
}
