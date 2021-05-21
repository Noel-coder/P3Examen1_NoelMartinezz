#include "Pelicula.h"

Pelicula::Pelicula()
{
}

Pelicula::~Pelicula()
{
}
Pelicula::Pelicula(string _titulo,string _director, string _genero,int _valoracion){
	this->titulo = _titulo;
	this->director = _director;
	this->genero = _genero;
	this->valoracion = _valoracion;
}

string Pelicula::getTitulo() {
	return this->titulo;
}

void Pelicula::setTitulo(string _titulo) {
	this->titulo = _titulo;
}

string Pelicula::getDirector(){
	return this->director;
}

void Pelicula::setDirector(string _director){
	this->director = _director;
}

string Pelicula::getGenero(){
	return this->genero;
}

void Pelicula::setGenero(string _genero){
	this->genero = _genero;
}

int Pelicula::getValoracion(){
	return this->valoracion;
}

void Pelicula::setValoracion(int _valoracion){
	this->valoracion = _valoracion;
}