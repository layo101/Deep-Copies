all: test

test: test.o LL1.o LL2.o
	g++ -Wall -o test test.o LL1.o LL2.o

test.o: test.cpp LL1.h LL2.h
	g++ -Wall -o test.o -c test.cpp 

LL1.o: LL1.cpp LL1.h
	g++ -Wall -o LL1.o -c LL1.cpp

LL2.o: LL2.cpp LL2.h
	g++ -Wall -o LL2.o -c LL2.cpp
clean:
	rm -f test *.o
