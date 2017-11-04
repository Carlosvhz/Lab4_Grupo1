#include "minesweeper.h"
#include <cstdlib>
#include <time.h>
#include <math.h>

minesweeper::minesweeper(int pn){
	n = pn;
	matriz = crearmatriz(n);
}


//Funcion crear matriz

int** minesweeper::crearmatriz(int n){
	srand(time(NULL));
	int**matrix=new int*[n];
	for(int i=0;i<n;i++){
		matrix[i]=new int[n];
	}
	int i=0, j=0, k=rand()%9;

	for(int h=0;h<k;h++){
		i=rand()%i;
		j=rand()%9;
		matrix[i][j] = -1;
	}
	
	
	
return matrix;
}
