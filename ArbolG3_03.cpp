/* ArbolG3_03.c++
Programa: Variante 3 de la creacion de un arbol de grado 3 pero ahora con mas hijos (12 hijos 1 padre) 13 nodos
Compilo y/o Transcribio: Pérez Nava Yael Mauricio
Fecha de Compilacion: 01/06/25

*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
struct NODO
{
	int DATO;
    struct NODO *IZQ;
    struct NODO *CENTRO;
    struct NODO *DCHO;
	
};

int aux;  // Variable auxiliar
struct NODO *PADRE, *N = NULL;
struct NODO *HI1 = NULL, *HI2 = NULL, *HI3 = NULL;           // Hijos del padre
struct NODO *HI1I = NULL, *HI1C = NULL, *HI1D = NULL;         // Hijos del hijo 1
struct NODO *HI2I = NULL, *HI2C = NULL, *HI2D = NULL;         // Hijos del hijo 2
struct NODO *HI3I = NULL, *HI3C = NULL, *HI3D = NULL;         // Hijos del hijo 3


int main()
{
	 // Nodo padre
    N = new(NODO);
    printf("Dame el valor del nodo Padre:\n");
    scanf("%d", &aux);
    N->DATO = aux;
    N->IZQ = NULL;
    N->CENTRO = NULL;
    N->DCHO = NULL;
    PADRE = N;

    // Primer hijo del padre
    N = new(NODO);
    printf("Dame el valor del hijo izquierdo:\n");
    scanf("%d", &aux);
    N->DATO = aux;
    N->IZQ = NULL;
    N->CENTRO = NULL;
    N->DCHO = NULL;
    PADRE->IZQ = N;
    HI1 = N;

    // Segundo hijo del padre
    N = new(NODO);
    printf("Dame el valor del hijo centro:\n");
    scanf("%d", &aux);
    N->DATO = aux;
    N->IZQ = NULL;
    N->CENTRO = NULL;
    N->DCHO = NULL;
    PADRE->CENTRO = N;
    HI2 = N;

    // Tercer hijo del padre
    N = new(NODO);
    printf("Dame el valor del hijo derecho:\n");
    scanf("%d", &aux);
    N->DATO = aux;
    N->IZQ = NULL;
    N->CENTRO = NULL;
    N->DCHO = NULL;
    PADRE->DCHO = N;
    HI3 = N;

    // Hijos del primer hijo
    printf("Dame el valor del hijo izquierdo del hijo izquierdo:\n");
    HI1I = new(NODO);
    scanf("%d", &aux);
    HI1I->DATO = aux;
    HI1I->IZQ = HI1I->CENTRO = HI1I->DCHO = NULL;
    HI1->IZQ = HI1I;

    printf("Dame el valor del hijo centro del hijo izquierdo:\n");
    HI1C = new(NODO);
    scanf("%d", &aux);
    HI1C->DATO = aux;
    HI1C->IZQ = HI1C->CENTRO = HI1C->DCHO = NULL;
    HI1->CENTRO = HI1C;

    printf("Dame el valor del hijo derecho del hijo izquierdo:\n");
    HI1D = new(NODO);
    scanf("%d", &aux);
    HI1D->DATO = aux;
    HI1D->IZQ = HI1D->CENTRO = HI1D->DCHO = NULL;
    HI1->DCHO = HI1D;

    // Hijos del segundo hijo
    printf("Dame el valor del hijo izquierdo del hijo centro:\n");
    HI2I = new(NODO);
    scanf("%d", &aux);
    HI2I->DATO = aux;
    HI2I->IZQ = HI2I->CENTRO = HI2I->DCHO = NULL;
    HI2->IZQ = HI2I;

    printf("Dame el valor del hijo centro del hijo centro:\n");
    HI2C = new(NODO);
    scanf("%d", &aux);
    HI2C->DATO = aux;
    HI2C->IZQ = HI2C->CENTRO = HI2C->DCHO = NULL;
    HI2->CENTRO = HI2C;

    printf("Dame el valor del hijo derecho del hijo centro:\n");
    HI2D = new(NODO);
    scanf("%d", &aux);
    HI2D->DATO = aux;
    HI2D->IZQ = HI2D->CENTRO = HI2D->DCHO = NULL;
    HI2->DCHO = HI2D;

    // Hijos del tercer hijo
    printf("Dame el valor del hijo izquierdo del hijo derecho:\n");
    HI3I = new(NODO);
    scanf("%d", &aux);
    HI3I->DATO = aux;
    HI3I->IZQ = HI3I->CENTRO = HI3I->DCHO = NULL;
    HI3->IZQ = HI3I;

    printf("Dame el valor del hijo centro del hijo derecho:\n");
    HI3C = new(NODO);
    scanf("%d", &aux);
    HI3C->DATO = aux;
    HI3C->IZQ = HI3C->CENTRO = HI3C->DCHO = NULL;
    HI3->CENTRO = HI3C;

    printf("Dame el valor del hijo derecho del hijo derecho:\n");
    HI3D = new(NODO);
    scanf("%d", &aux);
    HI3D->DATO = aux;
    HI3D->IZQ = HI3D->CENTRO = HI3D->DCHO = NULL;
    HI3->DCHO = HI3D;

    // Impresión visual de los nodos
    printf("\n\n\t\t\t\t\t\t %d\n", PADRE->DATO);
    printf("\n\t\t %d\t\t\t\t%d\t\t\t\t%d\n", HI1->DATO, HI2->DATO, HI3->DATO);
    printf("\n\t  %d\t %d\t %d\t\t %d\t %d\t %d\t\t %d\t %d\t %d\n",
           HI1I->DATO, HI1C->DATO, HI1D->DATO,
           HI2I->DATO, HI2C->DATO, HI2D->DATO,
           HI3I->DATO, HI3C->DATO, HI3D->DATO);

    system("pause");
    return 0;


	}
