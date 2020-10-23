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

vg2 :
	valgrind --leak-check=full ./main

vg3 :
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -v ./main

gdb :
	gdb ./main

clean :
	rm *.o
	rm main
