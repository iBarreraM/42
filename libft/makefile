# Nombre del ejecutable
NAME = libft.a

# Lista de archivos fuente
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c

# Lista de archivos objeto
OBJS = $(SRCS:.c=.o)

# Compilador y opciones
CC = gcc
FLAGS = -Wall -Wextra -Werror

# Regla para construir la biblioteca
$(NAME): $(OBJS)
	ar rcs $@ $^

# Regla para compilar archivos fuente en archivos objeto
%.o:i %.c
	$(CC) $(FLAGS) -c -o $@ $<

# Regla para limpiar archivos generados

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
re: fclean all

.PHONY: all clean flean re
