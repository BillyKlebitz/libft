SRCS    = ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
OBJS    = $(addprefix , ${SRCS:.c=.o})
NAME    = libft.a
.c.o:	gcc -Wall -Wextra -Werror -c -I. $< -o ${<:.c=.o}
$(NAME):    ${OBJS}
			ar	rc	$@	$^
all:    
	${NAME}
clean:	
	rm -f ${OBJS}
fclean:     
	clean	rm -f ${NAME}
re:         
	fclean all
