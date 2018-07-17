all:questionb

questionb: ClockCow.o Clock.o
	g++ -o questionb ClockCow.o Clock.o
ClockCow.o:ClockCow.cpp Clock.h
	g++ -c ClockCow.cpp
Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp
clean:
	rm questionb *.o

