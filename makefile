NAME =      libasm.a

SRCS =      ft_strlen.s\
			ft_strcpy.s\
			ft_strcmp.s\
			ft_write.s\
			ft_read.s\
			ft_strdup.s

OBG =       $(SRCS:.s=.o)

%.o         : %.s
			nasm -f macho64 $< -o $@

all:        $(NAME)

$(NAME):    $(OBG)
			ar rcs $(NAME) $(OBG)

clean:
			rm -f $(OBG)


fclean:		clean
			rm -f $(NAME)
			rm -f test_libasm

re:			fclean all