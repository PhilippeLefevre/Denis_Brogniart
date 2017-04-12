CXX		=	g++
CXXFLAGS	=	-W -Wall -Wextra -ansi
CXXFLAGS	+=	-std=c++11
CXXFLAGS	+=	-I$(INC_DIR)

LDFLAGS		=	-lsfml-system -lsfml-audio

SRC_DIR		=	src
INC_DIR		=	inc
DL_DIR		=	.

RM		=	rm -f
MKDIR		=	mkdir -p
RMDIR		=	rm -df

DL_NAME		=	denis
DL		=	$(DL_DIR)/$(DL_NAME)
DL_SRC		=	$(SRC_DIR)/main.cpp		\
			$(SRC_DIR)/Brogniart.cpp
DL_OBJ		=	$(DL_SRC:.cpp=.o)
DL_FLAG		=	$(LDFLAGS)

all:		$(DL)

$(DL):		$(DL_OBJ)
		@$(CXX) $(DL_OBJ) $(DL_FLAG) -o $(DL) && printf "[\033[1;36mLinked\033[0m] % 41s\n" $(DL) | tr ' ' '.' || printf "[\033[1;31mFailed\033[0m] % 41s\n" $(DL) | tr ' ' '.'

clean:
		@$(RM) $(DL_OBJ) && printf "[\033[1;31mDeleted\033[0m] % 40s\n" $(DL_OBJ) | tr ' ' '.'

fclean:		clean
		@$(RM) $(DL) && printf "[\033[1;31mDeleted\033[0m] % 40s\n" $(DL) | tr ' ' '.'

re:		fclean all

.PHONY:		all clean fclean re

.cpp.o	:
		@$(CXX) $(CXXFLAGS) $(LDFLAGS) -c $< -o $@ && printf "[\033[1;32mCompiled\033[0m] % 39s\n" $< | tr ' ' '.' || printf "[\033[1;31mFailed\033[0m] % 41s\n" $< | tr ' ' '.'
