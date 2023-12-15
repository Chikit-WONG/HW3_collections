# Define the compiler
CXX=g++

# Define compiler flags
CXXFLAGS=-Wall -g

# Define the target executable
TARGET=main

# Define the build rule
all: $(TARGET)

# Define how to link the final executable
$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o

# Define how to compile source files
main.o: MyCollections.hpp main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Define the clean rule
clean:
	rm -f *.o $(TARGET)
