CC = g++
FLAGS = -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi

test:
	$(CC) $(FLAGS) -o ./bin/test test.o window.o glad.o

test.o: window.h
	$(CC) $(FLAGS) -c test.cpp

window.o: window.h ./include/glad/glad.h

glad.o: 

run:
	./bin/test

clean:
	rm ./bin/test