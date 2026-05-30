NAME = computor
SOURCES =
BSOURCES =
OBJECTS = $(SOURCES:.cpp=.o)
BOBJECTS = $(BSOURCES:.cpp=.o)
INCLUDE = mandatory
BINCLUDE = bonus

CC = c++
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $^

bonus: $(BOBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $^

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@ -I$(INCLUDE) -I$(BINCLUDE)

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re