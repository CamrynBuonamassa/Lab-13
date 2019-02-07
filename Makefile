CXXFLAGS=-std=c++14
LDFLAGS=
OBJECTS=main.o

main: main.o
	g++ -o main main.o 

main.o: main.cpp
	g++ -c main.cpp
clean:
	rm -f $(OBJECTS)