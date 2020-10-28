#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int main(int argc, char *argv[])
{
    printf("ft:%d\n",ft_atoi(argv[1]));
    printf("atoi:%d\n",atoi(argv[1]));
    return (0);
}
