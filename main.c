#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	int size = 8539;

    void * d1 = ft_calloc(size, sizeof(int));
    void * d2 = calloc(size, sizeof(int));
    if (memcmp(d1, d2, size * sizeof(int)))
		printf("%s","loh");
}
