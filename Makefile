NAME	= libft.a
FILES	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  get_next_line.c \
		  get_next_line_utils.c \
		  ft_printf.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putnbr.c \
		  ft_printhexa.c \
		  ft_printpointer.c \
		  ft_print_error.c
B_FILES	= 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c
OBJS	= ${FILES:.c=.o}
B_OBJS	= ${B_FILES:.c=.o}
CC		= gcc
FLAGS	= -Wall -Werror -Wextra
RM		= rm -f

all:		${NAME}

${NAME}:
					${CC} -c ${FLAGS} ${FILES} -I ./
					ar rc ${NAME} ${OBJS}

bonus:		${NAME}
					${CC} ${FLAGS} -c ${B_FILES} -I ./
					ar rc ${NAME} ${B_OBJS}

%.o: %.c
					${CC} ${FLAGS} -c -o $@ $<

clean:
					${RM} ${OBJS} ${B_OBJS}

fclean:		clean
					${RM} ${NAME}

re:			fclean all

.PHONY:		all  bonus clean fclean re
