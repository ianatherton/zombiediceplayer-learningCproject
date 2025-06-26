####################################################
# Simple Makefile for a C Project - Zombie Dice Game
####################################################

# The compiler we're using (gcc = GNU Compiler Collection)
CC = gcc

# Compiler(GCC) flags:
# -Wall    = Enable all warnings
# -Wextra  = Enable extra warnings
# -g       = Add debugging information
# -std=c99 = Use C99 standard (modern C)
CFLAGS = -Wall -Wextra -g -std=c99

# Project directories
INCLUDE_DIR = headers    # Where header (.h) files are stored
SRC_DIR = code          # Where source (.c) files are stored
BIN_DIR = bin           # Where the final program will be created

# Name of our program
PROGRAM = zdice

# Find all .c files in the code directory
# The wildcard function automatically finds all files matching a pattern
SOURCES = $(wildcard $(SRC_DIR)/*.c)

# Tell the compiler where to find header files
INCLUDES = -I$(INCLUDE_DIR)

#####################################################
# MAKE TARGETS (commands you can run with 'make X')
#####################################################

# Default target - what happens when you just type 'make'
all: setup $(BIN_DIR)/$(PROGRAM)
	@echo "\nBuild complete! Run your program with: ./$(BIN_DIR)/$(PROGRAM)"

# Create the bin directory if it doesn't exist
setup:
	@echo "Setting up directories..."
	@mkdir -p $(BIN_DIR)

# Build the program
# This links all the compiled .c files into one executable
$(BIN_DIR)/$(PROGRAM): $(SOURCES)
	@echo "Building $(PROGRAM)..."
	$(CC) $(CFLAGS) $(INCLUDES) $(SOURCES) -o $(BIN_DIR)/$(PROGRAM)

# Clean up all generated files
# Use this when you want to rebuild from scratch
clean:
	@echo "Cleaning up..."
	@rm -rf $(BIN_DIR)
	@echo "Clean complete!"

# Build and run the program in one step
run: all
	@echo "\nRunning $(PROGRAM)..."
	@./$(BIN_DIR)/$(PROGRAM)

# Show available commands
help:
	@echo "\nAvailable commands:"
	@echo "  make       - Build the program"
	@echo "  make clean - Remove all built files"
	@echo "  make run   - Build and run the program"
	@echo "  make help  - Show this help message"

# Tell make that these targets don't represent files
# (This prevents conflicts with any files named 'all', 'clean', etc.)
.PHONY: all clean run help setup
