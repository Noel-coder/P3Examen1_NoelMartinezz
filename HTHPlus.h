#ifndef HTHPLUS_H
#define HTHPLUS_H
#include "Pelicula.h"
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;
class HTHPlus
{
	public:
		HTHPlus();
		~HTHPlus();
		void agregarPelicula(Pelicula*);
		void modificarPelicula(int,int);
		void eliminarPelicula(int);
		void listarPeliculas();
	private:
		vector <Pelicula*> listaPeliculas;
		
};

#endif