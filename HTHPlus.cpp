#include "HTHPlus.h"

HTHPlus::HTHPlus() {
}

HTHPlus::~HTHPlus() {
}
//
vector <string> listaGenero;

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

void HTHPlus::eliminarPelicula(int posicion) {
	for(int i=0; i < listaPeliculas.size(); i++) {
		if(i==posicion) {
			listaPeliculas.erase(listaPeliculas.begin()+1);
		}
	}
}

void HTHPlus::listarGenero() {
	Pelicula* pelicula;
	vector <string> listaGenero;
	for(int i = 0; i < listaPeliculas.size(); i++) {
		pelicula = listaPeliculas[i];
		string genero ="";
		genero = pelicula->getGenero();
		//validacion
		if(listaGenero.empty()) {
			listaGenero.push_back(genero);
		} else {
			int contador=0;
			for(int i = 0; listaGenero.size(); i++) {
				string temporal = "";
				temporal = listaGenero[i];
				if(genero == temporal) {
					contador++;
				}
			}
			if(contador==0) {
				listaGenero.push_back(genero);
			}
		}
	}
	for(int i=0; i < listaGenero.size(); i++) {
		string temporal = "";
		temporal=listaGenero[i];
		cout << temporal << ": "<<endl;
		for(int j = 0; j < listaPeliculas.size(); j++) {
			pelicula=listaPeliculas[j];
			if(temporal == pelicula->getGenero()) {
				cout << "#" << j << " " << pelicula->getTitulo()<<"-"<<pelicula->getDirector()<<"-"<<pelicula->getValoracion()<<"/5"<<endl;
			}
		}

	}
}

void HTHPlus::BuscarPelicula(string _titulo) {
	for(int i = 0; i < listaPeliculas.size(); i++) {
		Pelicula* pelicula = listaPeliculas[i];
		string tituloTemporal = pelicula->getTitulo();
		if(tituloTemporal.find(_titulo) != string::npos) {
			cout << "#" << i << " " << pelicula->getTitulo()<<"-"<<pelicula->getDirector()<<"-"<<pelicula->getValoracion()<<"/5"<<endl;
		}
	}
}


void HTHPlus::listarValoraciones() {
	int contador = 5;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < listaPeliculas.size(); j++) {
			Pelicula* pelicula = listaPeliculas[j];
			int temporal = pelicula->getValoracion();
			if(temporal==contador) {
				cout << "# " << j << pelicula->getTitulo()<<"-"<<pelicula->getDirector()<<"-"<<pelicula->getValoracion()<<"/5"<<endl;
			}
		}
		contador--;
	}
}