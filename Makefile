NAME = MateriaCraft
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)


TARGET = $(BIN_DIR)/$(NAME)

all: $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	@clear

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@

clean: 
	$(RM) $(OBJ_DIR)
	@clear

fclean: clean
	$(RM) $(BIN_DIR)
	@clear
	
re: fclean all