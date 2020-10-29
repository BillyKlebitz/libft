#include <stdio.h>
#include <string.h>
#include "ft_memcmp.c"

int main(int argc, char *argv[])
{
   printf("ft:%d\n",ft_memcmp(argv[1],argv[2],3));
    printf("memcmp:%d\n",memcmp(argv[1],argv[2],3));
    return (0);
}
