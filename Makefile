CXXFLAGS=-std=c++14
LDFLAGS=
OBJECTS=main.o vectorfunctions.o

main: main.o vectorfunctions.o
	g++ -o main main.o vectorfunctions.o

vectorfunctions.o: vectorfunctions.cpp vectorfunctions.h
main.o: main.cpp vectorfunctions.h


clean:
	rm -f $(OBJECTS)