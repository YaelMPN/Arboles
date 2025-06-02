/* ArbolG3_02.c++
Programa: Variante 2 de la creacion de un arbol de grado 3
Compilo y/o Transcribio: Pérez Nava Yael Mauricio
Fecha de Compilacion: 29/05/25

*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
struct NODO
{
	int DATO;
	struct NODO* IZQ;
	struct NODO* CENTRO;
	struct NODO* DCHO;
};
int aux;
struct NODO* PADRE, * N = NULL;

int main()
{
	N = new(NODO);
	printf("Dame el valor del nodo Padre: \n");
	while (!(std::cin >> aux)) {
		std::cout << "Entrada no válida. Intenta de nuevo: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
		N->DATO = aux;
		N->IZQ = NULL;
		N->CENTRO = NULL;
		N->DCHO = NULL;
		PADRE = N;

		//nodo hijo izq
		N = new(NODO);
		printf("Dame el valor del hijo izquierdo: \n");
		while (!(std::cin >> aux)) {
			std::cout << "Entrada no válida. Intenta de nuevo: ";
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
			N->DATO = aux;
			N->IZQ = NULL;
			N->CENTRO = NULL;
			N->DCHO = NULL;
			PADRE->IZQ = N;

			//nodo hijo centro
			N = new(NODO);
			printf("Dame el valor del hijo centro: \n");
			while (!(std::cin >> aux)) {
				std::cout << "Entrada no válida. Intenta de nuevo: ";
				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}
				N->DATO = aux;
				N->IZQ = NULL;
				N->CENTRO = NULL;
				N->DCHO = NULL;
				PADRE->CENTRO = N;

				//nodo hijo derecho
				N = new(NODO);
				printf("Dame el valor del hijo derecho: \n");
				while (!(std::cin >> aux)) {
					std::cout << "Entrada no válida. Intenta de nuevo: ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}
					N->DATO = aux;
					N->IZQ = NULL;
					N->CENTRO = NULL;
					N->DCHO = NULL;
					PADRE->DCHO = N;

					printf("\n\t\t\t %d\n", PADRE->DATO);
					N = PADRE->IZQ;
					printf("\n\t\t %d", N->DATO);
					N = PADRE->CENTRO;
					printf("\t %d", N->DATO);
					N = PADRE->DCHO;
					printf("\t %d\n", N->DATO);
					system("pause");

					delete PADRE;
					delete N;





				}
