NAME		= 	libft.a
CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra
AR			= 	ar rcs
SRC			= 	ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
				ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat \
				ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr \
				ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr \
				ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
				ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
BONUS_SRC	=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
				ft_lstadd_back ft_lstdelone ft_lstclear ft_lstiter \
				ft_lstmap
SRCS		=	$(addsuffix .c, $(SRC))
OBJS		=	$(addprefix obj/, $(addsuffix .o, $(SRC)))
BONUS_SRCS	=	$(addsuffix .c, $(BONUS_SRC))
BONUS_OBJS	=	$(addprefix obj/, $(addsuffix .o, $(BONUS_SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^

obj/%.o: %.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus

clean:
	rm -f obj/*.o
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all
