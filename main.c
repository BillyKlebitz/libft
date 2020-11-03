#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "ft_split.c"

int main(int argc, char *argv[])
{
	
	/*
	char *s1 = malloc(15 * sizeof(char));
    char *s2 = malloc(15 * sizeof(char));	
	
	ft_strlcpy(s1,"mamab",5);
	ft_strlcpy(s2,"mamab",5);
	ft_strlcat(s1,"ptra",4);
	strlcat(s2,"ptra",4);
	ft_strlcat(s1,"ptra",4);
    strlcat(s2,"ptra",4);
	printf("%s\n",s1);
	printf("%s\n",s2);
	*/	
	
	int i = 1;
	while(ft_split(" lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')[i-1])
	{	
		printf("%s",ft_split(" lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')[i-1]);
		i++;
	}
}
