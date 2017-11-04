#ifndef MINESWEEPER_H
#define MINESWEEPER_H

class minesweeper{
	
	private:
		int n;
		int**matriz;
	public:
		minesweeper(int n);
		int** crearmatriz(int ni);
		int** llenarmatriz();
};

#endif
