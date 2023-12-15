# Compiler
CXX := g++

# Source files 
SOURCES := 2048-cli.cpp 2048game.cpp

# Object files
OBJECTS := $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE := 2048-cli 

# Compile and link 
$(EXECUTABLE): $(OBJECTS)
	$(CXX) -o $@ $^

# Compile source files to object files
%.o: %.cpp
	$(CXX) -c -o $@ $<

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

.PHONY: clean







# # Compiler
# CXX := g++

# # Source file 
# SOURCE := 2048-cli.cpp 2048game.cpp

# # Executable name
# EXECUTABLE := 2048-cli 

# # Compile and link 
# $(EXECUTABLE): $(SOURCE)
# 	$(CXX) -o $@ $<

# clean:
# 	rm -f $(EXECUTABLE)

# .PHONY: clean








# g++ -c 2048game.cpp
# g++ 2048-cli.o 2048game.o -o 2048-cli -lncurses


# 2048-cli:2048-cli.o 2048game.o
# 	g++ 2048-cli.o 2048game.o -o 2048-cli
# 2048-cli.o:2048-cli.cpp
# 	g++ -c 2048-cli.cpp
# 2048game.o:2048game.cpp
# 	g++ -c 2048game.cpp 
# .PHONY:clean

# #linux 下用 rm -rf *.o main
# clean:
# 	@echo "=======clean project========="
# 	del  *.o 
# 	@echo "=======clean completed========="







# CXX = g++
# CXXFLAGS = -Wall -Wextra -std=c++11
# LDFLAGS = -lncurses

# SRC_DIR = .
# BUILD_DIR = .

# SRCS = $(wildcard $(SRC_DIR)/*.cpp)
# OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# TARGET = 2048-cli

# all: $(TARGET)

# $(TARGET): $(OBJS) 2048game.o
# 	$(CXX) $^ -o $@ $(LDFLAGS)

# $(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# .PHONY: clean

# clean:
# 	@echo "=======clean project========="
# 	-rm -f $(BUILD_DIR)/*.o $(TARGET)
# 	@echo "=======clean completed========="


