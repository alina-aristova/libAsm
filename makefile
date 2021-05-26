NAME =      libasm.a

SRCS =      ft_strlen.s\
			ft_strcpy.s\
			ft_strcmp.s\
			ft_write.s\
			ft_read.s\
			ft_strdup.s
BONUS_SRCS	=	 ft_list_size_bonus.s ft_list_sort_bonus.s ft_list_push_front_bonus.s 
BONUS_OBJS	=	$(BONUS_SRCS:.s=.o)

OBG =       $(SRCS:.s=.o)

%.o         : %.s
			nasm -f macho64 $< -o $@

all:        $(NAME)

$(NAME):    $(OBG)
			ar rcs $(NAME) $(OBG)
bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
			rm -f $(OBG) $(BONUS_OBJS)


fclean:		clean
			rm -f $(NAME)
			rm -f test_libasm

re:			fclean all