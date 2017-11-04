#include <ncurses.h>
#include <string>
#include <vector>
#include "Persona.h"

//Prototipo
void ingresarUsuarios(int*);
void play(int);

int main(){
	vector<Persona> usuarios;
	initscr();
	//WINDOW* minesweeper = newwin(5,5,5,5);	
	//play(2);
	int opcion=0, posicion=1;
	start_color();
	
	while(opcion==0){
		move(posicion++,0);
		printw("======Minesweeper====");
		noecho();
		move(posicion++,0);
		printw("1. Para jugar ");
		move(posicion++,0);
		printw("2. Para ingresar ");
		move(posicion++,0);
		echo();
		printw("--- Ingrese numero: ");
		opcion = getch()-48;
		noecho();	

		//move(posicion+3,10);
		//printw("################# Numero ingresado: "+posicion);

			switch(opcion){
				case 1:{
					play(1);
					if(usuarios.size()<1){
						init_pair(1,COLOR_RED,COLOR_WHITE);
						move(posicion++,0);
						printw("### No hay usuarios para poder jugar");
					}else{
						int i;
						move(posicion++, 0);
						printw("Ingrese las dimensiones: ");
						echo();
						i = getch() - 48;	
						noecho();
						play(i);	
					}
				}
				break;
				case 2:{
					ingresarUsuarios(&posicion);
				}
				break;
				default:
					move(posicion++,0);
					printw("#### No existe ejercicio ###"+opcion);
				break;

			}
		move(posicion++,0);
		printw("=====================");	
		move(posicion++,0);
		echo();
		printw("Continuar?[0]: ");
		opcion = getch()-48;
		noecho();
		getch();
	}
	endwin();
	
	return 0;
}

void ingresarUsuarios(int*posicion){
	char nombre[20], clave[10];
	int Nclave;
	string nombreN;
	noecho();
	move(*posicion++,0);
	printw("=======Ingresar usuarios=======");
	move(*posicion++,0);
	printw("Ingrese nombre: ");
	getnstr(nombre,20);
	nombreN = nombre;
	move(*posicion++,0);
	printw("Ingrese clave: ");
	getnstr(clave,10);
	//Nclave = atoi(clave.c_srt());
	//Añadir al vector
	move(*posicion++,0);
	printw("!!Usuario añadido¡¡");
}

void play(int dimension){
	WINDOW* w = newwin(10,40,20,20);
	box(w,179,179);
	refresh();
	wrefresh(w);
}

