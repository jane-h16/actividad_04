#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int suma = 0, promedio = 0;
    int arreglo[5];
    int i,n;

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





    return 0;
}