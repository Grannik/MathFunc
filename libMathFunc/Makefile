# Makefile for compiling the lib_math_func library

# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pedantic
LIB_NAME = libmathfunc.a
LIB_SRCS = lib_math_func.c
LIB_OBJS = $(LIB_SRCS:.c=.o)

# Default target: build the library
all: $(LIB_NAME)

# Rule to create the static library
$(LIB_NAME): $(LIB_OBJS)
	@echo "\033[32mCreating static library \033[34m$@\033[0m \033[32mfrom object files: \033[34m$^\033[0m\033[32m\033[0m"
	@if ar rcs $@ $(LIB_OBJS); then \
		echo "\033[32mLibrary \033[34m$(LIB_NAME)\033[0m \033[32msuccessfully created.\033[0m"; \
	else \
		echo "\033[31m\033[1mERROR:\033[0m\033[31m Failed to create library \033[34m$(LIB_NAME)\033[0m\033[31m.\033[0m"; \
		exit 1; \
	fi

# Rule to compile source file into object file
%.o: %.c
	@echo "\033[32mCompiling \033[34m$<\033[0m \033[32minto object file \033[34m$@\033[0m\033[32m\033[0m"
	@if $(CC) $(CFLAGS) -c $< -o $@; then \
		echo "\033[32mCompilation of \033[34m$<\033[0m \033[32msuccessful.\033[0m"; \
	else \
		echo "\033[31m\033[1mERROR:\033[0m\033[31m Failed to compile \033[34m$<\033[0m\033[31m.\033[0m"; \
		exit 1; \
	fi

# Clean target to remove compiled files
clean:
	@echo "\033[32mCleaning object files and library...\033[0m"
	@if rm -f $(LIB_OBJS) $(LIB_NAME); then \
		echo "\033[32mCleanup completed.\033[0m"; \
	else \
		echo "\033[31m\033[1mERROR:\033[0m\033[31m Failed to clean files.\033[0m"; \
		exit 1; \
	fi

# Rebuild target
rebuild: clean all
