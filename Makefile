all: COW

COW:cow.o main.o
	g++ -o COW cow.o main.o
cow.o:cow.cpp cow.h
	g++ -c cow.cpp
main.o:main.cpp cow.h
	g++ -c main.cpp
clean:
	rm COW *.o

