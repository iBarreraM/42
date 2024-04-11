# Nombre del ejecutable
TARGET = libft.a

# Lista de archivos fuente
SRCS = ft_isalpha.c ft_isdigit.c

# Lista de archivos objeto
OBJS = $(SRCS:.c=.o)

# Compilador y opciones
CC = gcc
FLAGS = -Wall -Wextra -Werror

# Regla para construir la biblioteca
$(TARGET): $(OBJS)
	ar rcs $@ $^

# Regla para compilar archivos fuente en archivos objeto
%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

# Regla para limpiar archivos generados

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(TARGET)
re: fclean all

.PHONY: all clean flean re
