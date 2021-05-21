#include <iostream>
#include <ctime>
#include "Pelicula.h"
#include "HTHPlus.h"
using namespace std;
int menu() {
	while(true) {
		cout <<"[ Peliculas HTH ]"<<endl
		     <<"1. Agregar Pelicula: "<<endl
		     <<"2. Modificar Pelicula: "<<endl
		     <<"3. Eliminar Pelicula: "<<endl
		     <<"4. Listar Peliculas: "<<endl
		     <<"5. Imprimir Peliculas por genero: "<<endl
		     <<"6. Buscar Pelicula: "<<endl
		     <<"7. Imprimir peliculas ordenadas por valoracion: "<<endl
		     <<"8. Salir"<<endl
		     <<"Ingrese una opcion: ";
		int valor;
		cin>>valor;
		if(valor > 0 && valor < 9)
			return valor;
	}
}

int subMenu(){
	while(true){
		cout << "[SubMenu Modificar]" << endl
			 << "1. Modificar Titulo: " << endl
			 << "2. Modificar Director: "<< endl
			 << "3. Modificar Genero: "<< endl
			 << "4. Modificar Valoracion: " << endl
			 << "Ingrese una opcion: ";
		int valorSub;
		cin>>valorSub;
		if(valorSub > 0 && valorSub < 5)
			return valorSub;
	}	
}

void agregarPelicula(HTHPlus* aggPelicula){
	string titulo,director,genero;
	int valoracion;
	cout << "Ingrese el titulo de la pelicula: " << endl;
	getline(cin,titulo);
	getline(cin,titulo);
	cout << "Ingrese el director de la pelicula: " << endl;
	getline(cin,director);
	cout << "Ingrese el genero de la pelicula: " << endl;
	getline(cin,genero);
	cout << "Valoracion de la Pelicula: " << endl;
	valoracion = 1 + rand()%5;
	cout << valoracion << endl; 
	aggPelicula->agregarPelicula(new Pelicula(titulo,director,genero,valoracion));
	cout << "La Pelicula ha sido guardada exitosamente!" << endl;
}

void modificarPelicula(HTHPlus* aggPelicula){
	cout << "Peliculas: "<<endl;
	aggPelicula->listarPeliculas();
	int opcion, posicion;
	cout << "Ingrese la posicion de la pelicula que desea modificar: " << endl;
	cin >> posicion;
	while(posicion < 0){
		cout << "La posicion no puede ser negativa" << endl;
		cout << "Ingrese la posicion de la pelicula que desea modificar: " << endl;
		cin >> posicion;
	}
	opcion = subMenu();
	aggPelicula->modificarPelicula(opcion,posicion);
}

void eliminarPelicula(HTHPlus* aggPelicula){
	cout << "Peliculas: " << endl;
	aggPelicula->listarPeliculas();
	int posicion;
	cout << "Ingrese la posicion de la pelicula que desea eliminar: " << endl;
	cin >> posicion;
	while(posicion < 0){
		cout << "La posicion no puede ser negativa" << endl;
		cout << "Ingrese la posicion de la pelicula que desea eliminar: " << endl;
		cin >> posicion;
	}
	aggPelicula->eliminarPelicula(posicion);
	cout << "La pelicula seleccionada ha sido eliminada con exito!" <<endl;
}


int main(int argc, char** argv) {
	srand(time(NULL));
	system("color 09");
	HTHPlus* aggPelicula = new HTHPlus();
	int opcion=0;
	while(opcion != 8) {
		switch(opcion=menu()) {
			case 1: {
				//agregar Pelicula
				agregarPelicula(aggPelicula);
				break;
			}
			case 2: {
				//Modificar Pelicula
				modificarPelicula(aggPelicula);
				break;
			}
			case 3:{
				//Eliminar Pelicula
				eliminarPelicula(aggPelicula);
				break;
			}
			case 4:{
				//listar Peliculas
				aggPelicula->listarPeliculas();
				break;
			}
			case 5:{
				//Imprimir Peliculas por genero
				
				break;
			}
			case 6:{
				//Buscar Pelicula
				break;
			}
			case 7:{
				//Imprimir peliculas ordenadas por valoracion
				
				break;
			}
			case 8:{
				cout << "Gracias Por Utilizar HTHPlus! Vuelva Pronto...";
				break;
			}
			default:{
				cout << "Valor Ingresado no es valido!";
				break;
			}
			delete aggPelicula;
			return 0;
		}
	}
}