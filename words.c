#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, totalwords;
  	totalwords = 1;
  	i = 0;
    printf("\n Please Enter any String :  ");
  	gets(str);
  	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
		i++;
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
	return 0;
}
