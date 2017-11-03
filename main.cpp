#include <ncurses.h>
#include <string>
#include <vector>
#include "Persona.h"

int main(){
	vector<Persona> usuarios;
	initscr();
	WINDOW* minesweeper = newwin(50,50,10,10);	
	int opcion=0, posicion=1;

	while(opcion==0){
		printw("1. Para jugar ");
		move(posicion,0);
		printw("2. Para ingresar ");
		move(posicion++,0);
		printw("Ingrese puto: ");
		opcion = getch()-48;
			
		switch(opcion){
			case 1:
				//Llamada al metodo para jugar.
			break;

			case 2:
				
			break;
				move(posicion+2,0);
				printw("####### No existe ejercicio ######");
			default:
		}
		move(posicion++,0);
		printw("Continuar?[0]: ");
		opcion = getch()-48;	
	}
	move(1,0);
	printw("Adios :v");
	getch();
	endwin();

	return 0;
}
