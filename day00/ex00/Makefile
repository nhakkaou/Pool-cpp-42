FLAGS = -Wall -Werror -Wextra
NAME =  megaphone
all : $(NAME)
src = megaphone.cpp
obj = megaphone.o
$(NAME) : $(src)
	clang++ $(FLAGS)  -c $(src)
	clang++ $(FLAGS)  $(obj) -o $(NAME)
clean :
	rm -f $(obj)
fclean : clean
	rm -f $(NAME)
re : fclean all