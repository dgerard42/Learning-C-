# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgerard <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:24:50 by dgerard           #+#    #+#              #
#    Updated: 2018/01/14 20:33:38 by esterna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

CC = clang++

FLAGS = -Wall -Werror -Wextra

SRCS =	asteroid.class.cpp\
		falcon.class.cpp\
		env_obj.class.cpp\
		game_env.class.cpp\
		lazer.class.cpp\
		main.cpp\

ODIR = ofiles

OFILES = $(addprefix $(ODIR)/,$(SRCS:.cpp=.o))

$(ODIR)/%.o: %.cpp
	@$(CC) $(FLAGS) -c $^ -o $@
	@/bin/echo -n "❂❂❂❂"

all: $(NAME)

$(NAME): $(OFILES)
	@echo "\033[32m[.o files created ( ͡° ͜ʖ ͡°)]\033[0m"
	@$(CC) $(FLAGS) -o $@ $(OFILES) -lncurses
	@echo "\033[32m[executable created ( ͡° ͜ʖ ͡°)]\033[0m"

$(OFILES): | $(ODIR)

$(ODIR):
	@mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)
	@echo "\033[31m[.o files deleted (╯°□°）╯︵ ┻━┻ ]\033[0m"

fclean: clean
	@/bin/rm -f rm $(NAME)
	@echo "\033[31m[$(NAME) executable deleted ᕙ(⇀‸↼‶)ᕗ ]\033[0m"

re: fclean all
