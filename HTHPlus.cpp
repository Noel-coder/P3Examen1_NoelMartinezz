#include "HTHPlus.h"

HTHPlus::HTHPlus() {
}

HTHPlus::~HTHPlus() {
}

void HTHPlus::agregarPelicula(Pelicula* pelicula) {
	listaPeliculas.push_back(pelicula);
}

void HTHPlus::listarPeliculas() {
	for(int i = 0; i < listaPeliculas.size(); i++) {
		Pelicula *listadoPeliculas = listaPeliculas[i];
		cout <<"------" << "Pelicula #" << i <<"------"<<endl;
		cout << "Titulo: "<< listadoPeliculas->getTitulo() << endl;
		cout << "Director: " << listadoPeliculas->getDirector() << endl;
		cout << "Genero: " <<  listadoPeliculas->getGenero() << endl;
		cout << "Valoracion: " << listadoPeliculas->getValoracion() <<  endl;
		cout << endl;
	}
}

void HTHPlus::modificarPelicula(int opcion, int posicion) {
	switch(opcion) {
		case 1: {
			//Modificar Titulo
			string tituloNuevo = "";
			cout << "Ingrese el nuevo titulo: "<< endl;
			cin >> tituloNuevo;
			for(int i = 0; i < listaPeliculas.size(); i++) {
				Pelicula *listadoPeliculas = listaPeliculas[i];
				if(i == posicion) {
					listadoPeliculas->setTitulo(tituloNuevo);
				}
			}
			cout << "El Titulo ha sido modificado con exito!" <<endl;
			break;
		}
		case 2: {
			//Modificar Director
			string directorNuevo = "";
			cout << "Ingrese el nuevo director: "<< endl;
			cin >> directorNuevo;
			for(int i = 0; i < listaPeliculas.size(); i++) {
				Pelicula *listadoPeliculas = listaPeliculas[i];
				if(i == posicion) {
					listadoPeliculas->setDirector(directorNuevo);
				}
			}
			cout << "El Director ha sido modificado con exito!" <<endl;
			break;
		}
		case 3: {
			//Modificar Genero
			string generoNuevo = "";
			cout << "Ingrese el nuevo genero: "<< endl;
			cin >> generoNuevo;
			for(int i = 0; i < listaPeliculas.size(); i++) {
				Pelicula *listadoPeliculas = listaPeliculas[i];
				if(i == posicion) {
					listadoPeliculas->setGenero(generoNuevo);
				}
			}
			cout << "El genero ha sido modificado con exito!" <<endl;
			break;
		}
		case 4: {
			//Modificar Valoracion
			srand(time(NULL));
			int valoracionNuevo;
			for(int i = 0; i < listaPeliculas.size(); i++) {
				Pelicula *listadoPeliculas = listaPeliculas[i];
				valoracionNuevo = 1 + rand()%5;
				if(i == posicion) {
					listadoPeliculas->setValoracion(valoracionNuevo);
				}
			}
			cout << "La valoracion ha sido modificada con exito!" <<endl;
			break;
		}
	}
}

void HTHPlus::eliminarPelicula(int posicion){
	for(int i=0; i < listaPeliculas.size(); i++) {
		if(i==posicion) {
			listaPeliculas.erase(listaPeliculas.begin()+1);
		}
	}
}