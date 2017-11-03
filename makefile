run:	main.o Persona.o minesweeper.o
	g++ main.o Persona.o minesweeper.o -o run -lncurses 
	
main.o:	Persona.h minesweeper.h main.cpp
	g++ -c main.cpp

Persona.o:	Persona.h Persona.cpp
	g++ -c Persona.cpp

minesweeper.o:	minesweeper.h minesweeper.cpp
	g++ -c minesweeper.cpp

clear:
	rm *.o run
