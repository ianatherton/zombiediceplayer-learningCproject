# Simple Makefile for Zombie Dice Game

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g -std=c99

# Directories
BIN_DIR = bin
INCLUDE_DIRS = -Iheaders -Idice

# Program name
PROGRAM = zdice

# Source files (from both code and dice directories)
SOURCES = $(wildcard code/*.c) $(wildcard dice/*.c)

# Default target
all: setup $(BIN_DIR)/$(PROGRAM)
	@echo "Build complete! Run with: ./$(BIN_DIR)/$(PROGRAM)"

# Create bin directory
setup:
	@mkdir -p $(BIN_DIR)

# Build the program
$(BIN_DIR)/$(PROGRAM): $(SOURCES)
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(SOURCES) -o $(BIN_DIR)/$(PROGRAM)

# Clean up
clean:
	@rm -rf $(BIN_DIR)

# Build and run
run: all
	@./$(BIN_DIR)/$(PROGRAM)

.PHONY: all clean run setup
