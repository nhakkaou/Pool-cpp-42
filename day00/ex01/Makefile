FLAGS = -Wall -Werror -Wextra
NAME =  main
all : $(NAME)
src = Contact.ClassName.cpp  main.cpp
obj = Contact.ClassName.o  main.o
$(NAME) : $(src)
	clang++ $(FLAGS)  $(src) -o $(NAME)
clean :
	rm -f $(obj)
fclean : clean
	rm -f $(NAME)
re : fclean all