# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antandre <antandre@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 15:56:18 by antandre          #+#    #+#              #
#    Updated: 2024/07/17 12:56:07 by antandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Tool and flag definitions
LIB = ar rcs               # Command to create static library
RM = rm -f                 # Command to remove files
MKDIR_P = mkdir -p         # Command to create directories

CC = cc                    # C compiler
CCFLAGS = -Wall -Wextra -Werror -Iincludes  # Compiler flags

# Target definitions
NAME = libft.a

# Source, object, and dependency files
SRC = $(shell find src -name "*.c")                       # Find all .c files in src directory and subdirectories
OBJ = $(patsubst src/%.c,bin/%.o,$(SRC))                  # Convert .c file paths to corresponding .o paths in bin/
DEPS = $(patsubst src/%.c,bin/%.d,$(SRC))                 # Convert .c file paths to corresponding .d paths in bin/

# Number of source files
NUM_SRC = $(words $(SRC))

# Default target
all: $(NAME)             # all target depends on $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	@echo "Creating library $(NAME)"
	@$(LIB) $(NAME) $(OBJ)   # Create the static library from object files
	@echo "Library $(NAME) created successfully"

# Rule to compile .c files to .o files in bin/
bin/%.o: src/%.c
	@$(MKDIR_P) $(dir $@)     # Create the directory for the object file if it doesn't exist
	@$(CC) $(CCFLAGS) -MMD -c $< -o $@   # Compile the .c file to .o and generate dependency file
	@$(eval COUNT=$(shell expr $(COUNT) + 1))
	@echo "[$(COUNT)/$(NUM_SRC)] Compiling $<\r"

# Clean up object and dependency files
clean:
	@$(RM) -r bin/            # Remove the bin/ directory
	@echo "Cleaned up object and dependency files"

# Clean up everything including the static library
fclean: clean
	@$(RM) $(NAME)            # Remove the static library
	@echo "Cleaned up library $(NAME)"

# Rebuild everything
re: fclean all                # Run fclean and then all

# Include dependency files
-include $(DEPS)

# Declare phony targets
.PHONY: all clean fclean re

# Initialize progress counter
COUNT = 0
