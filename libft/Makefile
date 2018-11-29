NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

PA = ./

SOURCES = \
		$(PA)ft_lstadd.c \
		$(PA)ft_bintodec.c \
		$(PA)ft_epur.c \
		$(PA)ft_isprime.c \
		$(PA)ft_power.c \
		$(PA)ft_show_bit.c \
		$(PA)ft_sqrrt.c \
		$(PA)ft_lstdel.c \
		$(PA)ft_lstdelone.c \
		$(PA)ft_lstiter.c \
		$(PA)ft_lstmap.c \
		$(PA)ft_lstnew.c \
		$(PA)ft_atoi.c \
		$(PA)ft_bzero.c \
		$(PA)ft_isalnum.c \
		$(PA)ft_isalpha.c \
		$(PA)ft_isascii.c \
		$(PA)ft_isdigit.c \
		$(PA)ft_isprint.c \
		$(PA)ft_itoa.c \
		$(PA)ft_memalloc.c \
		$(PA)ft_memccpy.c \
		$(PA)ft_memchr.c \
		$(PA)ft_memcmp.c \
		$(PA)ft_memcpy.c \
		$(PA)ft_memdel.c \
		$(PA)ft_memmove.c \
		$(PA)ft_memset.c \
		$(PA)ft_putchar.c \
		$(PA)ft_putchar_fd.c \
		$(PA)ft_putendl.c \
		$(PA)ft_putendl_fd.c \
		$(PA)ft_putnbr.c \
		$(PA)ft_putnbr_fd.c \
		$(PA)ft_putstr.c \
		$(PA)ft_putstr_fd.c \
		$(PA)ft_strcat.c \
		$(PA)ft_strchr.c \
		$(PA)ft_strclr.c \
		$(PA)ft_strcmp.c \
		$(PA)ft_strcpy.c \
		$(PA)ft_strdel.c \
		$(PA)ft_strdup.c \
		$(PA)ft_strequ.c \
		$(PA)ft_striter.c \
		$(PA)ft_striteri.c \
		$(PA)ft_strjoin.c \
		$(PA)ft_strlcat.c \
		$(PA)ft_strlen.c \
		$(PA)ft_strmap.c \
		$(PA)ft_strmapi.c \
		$(PA)ft_strncat.c \
		$(PA)ft_strncmp.c \
		$(PA)ft_strncpy.c \
		$(PA)ft_strnequ.c \
		$(PA)ft_strnew.c \
		$(PA)ft_strnstr.c \
		$(PA)ft_strrchr.c \
		$(PA)ft_strsplit.c \
		$(PA)ft_strstr.c \
		$(PA)ft_strsub.c \
		$(PA)ft_strtrim.c \
		$(PA)ft_tolower.c \
		$(PA)ft_toupper.c \

HEADERS = libft.h

OBJ = ./*.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SOURCES) -I ./include/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

############################## PERSONALIZED STUFF ##############################

ADD: ./src/ft_*/ft_*.c ADD_FILE_TO_LIST

Makef:
	sed -e '/SOURCES =/,$$d' ./Makefile > ./temp/part1.txt
	sed -n -e '/HEADERS =/,$$p' ./Makefile > ./temp/part2.txt
	echo 'SOURCES = \' >> ./temp/part1.txt
	find . -name 'list' -delete
	find ./srcs/ft_*/ft_*.c | rev | cut -d '/' -f1 | sed -e 's/_tf/_tf)AP($$/g' | rev >> list
	sed 's/$$/ NewDelim/' list | sed 's/.c NewDelim/.c \\/g' | sed 's/^/		/' >> ./temp/part1.txt
	echo '' >> ./temp/part1.txt ; cat ./temp/part2.txt >> ./temp/part1.txt
	rm -f ./temp/part2.txt
	mv ./temp/part1.txt ./Makefile

compile:
	$(CC) $(FLAGS) -L./ -lft -o out main.c -I ./include/ 

run:
	./out

header:
	cp ./include/init2.h ./include/initlibft.h
	cp ./include/initlibft.h ./include/libft.h
	rm -f ./include/temp.txt
	cat ./srcs/ft_*/ft_*.c | grep -E "^\w" | sed 's/$$/;/' | sed '/main(/d' >> ./include/temp.txt
	cat ./include/temp.txt >> ./include/initlibft.h
	cp include/initlibft.h include/libft.h
	echo '' >> ./include/libft.h ; echo '#endif' >> ./include/libft.h
	sed '/static /d' ./include/libft.h > prout
	mv prout ./include/libft.h

moveproject:
	rm -rf ~/libft
	mkdir ~/libft
	cp -r ./include ~/libft
	rm ~/libft/include/header.h ; rm ~/libft/include/initlibft.h ; rm ~/libft/include/temp.txt
	cp -r ./srcs ~/libft
	cp ~/libft/srcs/ft_*/ft_*.c ~/libft/srcs
	rm -rf ~/libft/srcs/*/
	echo "vlhomme" > ~/libft/auteur
