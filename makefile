CC = g++
FLAGS = -Wall -Wextra -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi -lglfw

GLFW = 

SRC := $(wildcard ./src/*.cpp ./src/*.c)
BIN = ./bin/

build: $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(BIN)test

run:
	$(BIN)test

clean:
	rm ./bin/test