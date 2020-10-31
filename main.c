#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char *big = "abcdefsadasdasd";
    char *little = "abcdef";
    size_t max = strlen(big);
    char *s1 = strnstr(big, little, max);
    char *s2 = ft_strnstr(big, little, max);
	printf("%s\n%s\n",s1,s2);
}
