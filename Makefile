CXXFLAGS=-std=c++14
LDFLAGS=-lm

main: main.o 
	g++ $(LDFLAGS) -o main main.o 

main.o: main.cpp vectorfunctions.h vectorfunctions.hxx
        
clean:
	rm -f main.o