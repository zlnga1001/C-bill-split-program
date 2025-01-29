# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable name
TARGET = sum_program

# Source file (update if you keep the .c++ extension)
SRC = sum_program.cpp

# Object file
OBJ = sum_program.o

# Default target
all: $(TARGET)

# Compile and link
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Compile source file
sum_program.o: $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)

# Run program
run: $(TARGET)
	./$(TARGET)

# Clean up compiled files
clean:
	rm -f $(OBJ) $(TARGET)
