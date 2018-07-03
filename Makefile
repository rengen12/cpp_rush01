# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnekhay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 21:46:13 by vnekhay           #+#    #+#              #
#    Updated: 2018/07/01 21:17:02 by vnekhay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

SRCSFILES   := main.cpp \
			modules/CatModule.cpp \
			modules/DateTimeModule.cpp \
			modules/Display.cpp \
			modules/MemRegionsModule.cpp \
			modules/NetworkModule.cpp \
			modules/RamModule.cpp \
			modules/CpuModule.cpp \
			modules/DisksModule.cpp \
			modules/HostnameModule.cpp \
			modules/Module.cpp \
			modules/OSinfoModule.cpp \
			modules/VmModule.cpp

SRCPATH = srcs

OBJPATH = obj

INCPATH = includes

CC = clang++

INCLUDES = -I $(INCPATH) -I ${HOME}/SFML/include

LIBS =	-framework sfml-graphics -framework sfml-window -framework sfml-system -F ${HOME}/SFML/Frameworks -lncurses

CFLAGS = -Werror -Wall -Wextra

RM = rm -rf

SRC = $(addprefix $(SRCPATH)/,$(SRCSFILES))

OBJECTS = $(SRC:$(SRCPATH)/%.cpp=$(OBJPATH)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling all"
	$(CC) -o $@ $(CFLAGS) $(OBJECTS) $(LIBS)

$(OBJECTS): $(OBJPATH)/%.o : $(SRCPATH)/%.cpp
	@mkdir -p $(dir $@)
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<

clean:
	$(RM) $(OBJPATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean format re