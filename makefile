# one: main.cpp
# 	@g++ main.cpp -o main
# 	@./main
# clean:
# 	@rm -r main


# Makefile
#Compiler
CXX = g++

# Compiler flags
CSSFLAGS = -std=c++11 -Wall -Wextra

# Executable name
TARGET = test_runner

#Source files
SRCS = main.cpp Invoice.cpp

# Build and run tests
.PHONY: all

all:
	@$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
	@./$(TARGET)

# Clean rule
.PHONY: clean
clean:
	@rm -f $(TARGET)