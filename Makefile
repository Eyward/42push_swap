# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 01:53:19 by zzirh             #+#    #+#              #
#    Updated: 2022/06/18 04:35:45 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker
CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

HEADER_BON = bonus.h

SRC = man/push_swap.c\
			man/utiles/ft_atoi.c\
			man/utiles/ft_checkargs.c\
			man/utiles/ft_checkdup.c\
			man/utiles/ft_count.c\
			man/utiles/ft_error.c\
			man/utiles/ft_indice.c\
			man/utiles/ft_isdigit.c\
			man/utiles/ft_isint.c\
			man/utiles/ft_isnbr.c\
			man/utiles/ft_issorted.c\
			man/utiles/ft_lstadd_back.c\
			man/utiles/ft_lstadd_front.c\
			man/utiles/ft_lstclear.c\
			man/utiles/ft_lstlast.c\
			man/utiles/ft_lstnew.c\
			man/utiles/ft_lstsize.c\
			man/utiles/ft_min.c\
			man/utiles/ft_putstr_fd.c\
			man/utiles/ft_sort_util_4.c\
			man/utiles/ft_sort_util_5.c\
			man/utiles/ft_split.c\
			man/utiles/ft_strjoin.c\
			man/utiles/ft_strlcat.c\
			man/utiles/ft_strlcpy.c\
			man/utiles/ft_strlen.c\
			man/utiles/ft_strncmp.c\
			man/operations/ft_instructions.c\
			man/operations/ft_instructions1.c\
			man/operations/ft_instructions2.c\
			man/operations/ft_instructions3.c\
			man/sortalgo/ft_simple_sort.c\
			man/sortalgo/ft_sort.c\
			
.PHONY : all clean fclean re

OBJ = $(SRC:%.c=%.o)

SRC_BONUS = bonus/bonus.c\
			bonus/utils/utils_bonus.c\
			bonus/utils/ft_atoi_bonus.c\
			bonus/utils/ft_checkargs_bonus.c\
			bonus/utils/ft_checkdup_bonus.c\
			bonus/utils/ft_count_bonus.c\
			bonus/utils/ft_error_bonus.c \
			bonus/utils/ft_isdigit_bonus.c\
			bonus/utils/ft_isint_bonus.c\
			bonus/utils/ft_isnbr_bonus.c\
			bonus/utils/ft_issorted_bonus.c\
			bonus/utils/ft_lstadd_back_bonus.c\
			bonus/utils/ft_lstadd_front_bonus.c\
			bonus/utils/ft_lstclear_bonus.c\
			bonus/utils/ft_lstlast_bonus.c\
			bonus/utils/ft_lstnew_bonus.c\
			bonus/utils/ft_lstsize_bonus.c\
			bonus/utils/ft_split_bonus.c\
			bonus/utils/ft_strlen_bonus.c\
			bonus/utils/ft_strncmp_bonus.c\
			bonus/utils/get_next_line_bonus.c\
			bonus/utils/get_next_line_utils_bonus.c\
			bonus/operations/ft_instructions_bonus.c\
			bonus/operations/ft_instructions1_bonus.c\
			bonus/operations/ft_instructions2_bonus.c\
			bonus/operations/ft_instructions3_bonus.c\
			
OBJ_BONUS = $(SRC_BONUS:%.c=%.o)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

bonus : $(OBJ_BONUS)
	@$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)
clean :
	@rm -rf $(OBJ) $(OBJ_BONUS)

fclean : clean
	@rm -rf $(NAME) $(NAME_BONUS)

re : fclean all	bonus		
