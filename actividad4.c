#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

//Funcion del programa 2
void mostrar(int n,char arreglo2[]);

struct personaje{
	char nombre[50];
	char tipo[50];
	char fuerza[50];
	char salud[10];
	
}personajes[5];

int main(){
    int suma = 0, promedio = 0;
    int arreglo[5];
    int i,n;
    char arreglo2[20];

    //llenado de arreglo PROGRAMA 1
    for(i=0;i<5;i++){
        printf("\nIngrese el elemento en la posicion %d: ",i);
        scanf("%d",&arreglo[i]);
    }
    //Mostrar arreglo en pantalla
    for(i=0;i<5;i++){
        printf(" %d ",arreglo[i]);
        printf("\n");
    }
    
    //Ciclo Suma y Promedio
    
    for(i=0;i<5;i++){
        suma += arreglo[i];
        promedio = suma/5;
    }
    
    printf("\nEl resultado de la suma de los elementos de tu arreglo es: %d",suma);
    printf("\n El resultado del promedio de tus elementos de tu arreglo es: %d",promedio);
    printf("\n");

    //Repetir N veces Programa 2
    printf("\nLlena el arreglo de caracteres: ");
    scanf("%s",&arreglo2);
    printf("\n Cuantas veces quieres que se repita el arreglo: ");
    scanf("%d",&n);
    mostrar(n,arreglo2);

    //Estructura personaje Programa 3
    
    int x;
	for (x=0;x<5;x++){
		printf("Ingresa el nombre de tu personaje:\n");
		scanf("%s",&personajes[x].nombre);
		printf("Ingresa de que tipo quieres tu personaje:\n");
		scanf("%s",&personajes[x].tipo);
		printf("Ingresa la fuerza que tiene tu personaje:\n");
		scanf("%s",&personajes[x].fuerza);
		printf("Ingresa la salud de tu personaje:\n");
		scanf("%s",&personajes[x].salud);
		
	}
	
	for (x=0;x<5;x++){
		printf("El nombre de tu personaje es: %s\n",personajes[x].nombre);
		printf("El Tipo de tu personaje es: %s\n",personajes[x].tipo);
		printf("La fuerza de tu personaje es: %s\n",personajes[x].fuerza);
		printf("La salud de tu personaje es: %s\n",personajes[x].salud);

	}
	

    return 0;
}

    //Funcion del programa 2 
    void mostrar(int n, char arreglo2[])
{
    int j;
    for(j=0;j<n;j++){
        printf("%s",arreglo2);
        printf("\n");
    }
}

