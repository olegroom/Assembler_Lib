NAME=libasm.a
PROG_NAME=proga
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_strdup.o ft_write.o ft_read.o
SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s

all: $(NAME)

$(OBJ): $(SRC)
	nasm -f macho64 ft_strlen.s
	nasm -f macho64 ft_strcpy.s
	nasm -f macho64 ft_strcmp.s
	nasm -f macho64 ft_strdup.s
	nasm -f macho64 ft_write.s
	nasm -f macho64 ft_read.s

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

test:
	gcc main.c $(NAME) -o $(PROG_NAME)
	./$(PROG_NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(PROG_NAME)
	rm -rf $(NAME)

re:	fclean all

.PHONY: $(NAME) test clean fclean re all