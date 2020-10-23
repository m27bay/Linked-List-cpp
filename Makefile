all : compile
	./main

compile : main.o list.o
	g++ main.o List.o -o main

main.o : main.cpp
	g++ -c -Wall main.cpp

list.o : List.cpp List.hpp
	g++ -c -Wall List.cpp

vg :
	valgrind ./main

clean :
	rm *.o
	rm main
