test:
	g++ ./src/test.cpp ./src/window.cpp ./src/glad.c -o ./bin/test -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi

run:
	./bin/test

clean:
	rm ./bin/test