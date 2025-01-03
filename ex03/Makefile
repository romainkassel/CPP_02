NAME = a.out

SRCS = ./srcs/
TESTS = ./tests/

INCLUDES = -Iincludes

CPPFILES = 	$(SRCS)main.cpp $(SRCS)Fixed.cpp $(SRCS)Point.cpp $(SRCS)bsp.cpp \
			tests/testCopyByAffectation/testFixedCopyByAffectation.cpp \
			tests/testCopyByConstructor/testFixedCopyByConstructor.cpp tests/testCopyByConstructor/testPointCopyByConstructor.cpp
OFILES = $(CPPFILES:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CC) $(FLAGS) -g -c -o $@ $< $(INCLUDES)

$(TESTS)%.o: $(TESTS)%.cpp
	$(CC) $(FLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByAffectation/%.o: tests/testCopyByAffectation/%.cpp
	$(CC) $(FLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByConstructor/%.o: tests/testCopyByConstructor/%.cpp
	$(CC) $(FLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re