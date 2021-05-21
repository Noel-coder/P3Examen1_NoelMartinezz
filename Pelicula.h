#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
class Pelicula
{
	public:
		Pelicula();
		~Pelicula();
		Pelicula(string,string,string,int);
		string getTitulo();
		void setTitulo(string);
		string getDirector();
		void setDirector(string);
		string getGenero();
		void setGenero(string);
		int getValoracion();
		void setValoracion(int);
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;
};

#endif