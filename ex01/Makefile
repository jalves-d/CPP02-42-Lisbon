NAME		=	Fixed

SRCS		=	./main.cpp \
				./Fixed.cpp

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean :
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
