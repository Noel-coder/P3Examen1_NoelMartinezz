#ifndef HTHPLUS_H
#define HTHPLUS_H
#include "Pelicula.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;
class HTHPlus
{
	public:
		HTHPlus();
		~HTHPlus();
		void agregarPelicula(Pelicula*);
		void agregarValoracion(int);
		void modificarPelicula(int,int);
		void eliminarPelicula(int);
		void listarPeliculas();
		void BuscarPelicula(string);
		void listarGenero();
		void listarValoraciones();
	private:
		vector <Pelicula*> listaPeliculas;
};

#endif