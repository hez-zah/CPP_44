NAME = Recap
SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
OBJ_DIR = ./objet
OBJ = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))
HEADER = AMateria.hpp Character.hpp Cure.hpp \
			Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 
RM = rm -rf
PP = c++

BLUE = \033[0;34m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all : $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)creat obje_directory$(RESET)"

$(NAME) : $(OBJ) $(HEADER)
	@$(PP) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "$(BLUE)make cpp04/ex00$(RESET)"

$(OBJ_DIR)/%.o: %.cpp $(HEADER)|$(OBJ_DIR)
	@$(PP) $(CPPFLAGS) -c $< -o $@

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)clean cpp04/ex00$(RESET)"

clean:
	@$(RM) $(OBJ_DIR)

re : fclean $(NAME)

.PHONY: all clean fclean re
