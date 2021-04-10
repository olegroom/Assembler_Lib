NAME=tryasm
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o
SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s

all: $(NAME)
	./tryasm

$(OBJ): $(SRC)
	nasm -f macho64 ft_strlen.s
	nasm -f macho64 ft_strcpy.s
	nasm -f macho64 ft_strcmp.s

$(NAME): $(OBJ) main.c
	gcc main.c $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libasm.a
	rm -rf $(NAME)

re:	fclean all