#include <stdio.h>
#include <stdlib.h>





int main()
{


//en la pila solo vamos a guardar punteros.y vamos a mandar los vectores al Heap
    int* pVec;
    int* pAux;
    int i;
    //int vector[5]; Esto esta en memoria estatica. Se remplaza por lo de anajo
    pVec = (int*) malloc(sizeof(int)*5);   //esta funcion es equivalente a la de arriba pero en memoria dinamica
            //calloc inicializa todo en 0,(recibe el sizeof y lo multiplica n veces
//  pVec = (int*) calloc(sizeof(int),5); seria equivalente
    for(i=0;i<5;i++)
    {
       // *(pVec+i) = i+1;
       printf("Ingrese un numero: ");
       scanf("%d", pVec+i);
    }

    for(i=0;i<5;i++);
    {
        printf("%d\n", *(pVec+i) );
    }


    /**REALLOC
    redimenciona un puntero,le agrega mas espacio a una referencia
    se le pasa el puntero y el tamaño que quiero
    */
    pAux =(int*)realloc(pVec,sizeof(int)*10);
    if(pAux!=NULL)
    {
        pVec=pAux;
    }

    for(i=5;i<10;i++)
    {
       printf("Ingrese un numero: ");
       scanf("%d", pVec+i);
    }
    for(i=0;i<10;i++);
    {
        printf("%d\n", *(pVec+i) );
    }

    printf("LO ACHICO\n");
    pVec = (int*) realloc()


    return 0;
}


