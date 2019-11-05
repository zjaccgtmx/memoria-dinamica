#include "persona.h"
#include <stdio.h>
#include <stdlib.h>

/*
ePersona* new_Persona()
{   //las variables estas son locales
    ePersona unaPersona ={1000,'m',1.78};   //creo ePersona con datos hardcodeados
    ePersona* puntero;  //creo el puntero
    puntero  = &unaPersona; //al puntero le asigno la dir de memoria de unaPersona

    return puntero;//devuelve lo unico que trasciende el scope
}
*/
ePersona* new_Persona()
{
    ePersona* puntero;  //creo el puntero

    puntero = (ePersona*)calloc(sizeof(ePersona),1);//malloc es para reservar/pedir memoria dinamica. devuelve la direccion de memoria de eso
    //siempre hay que castearlo a el tipo de dato que quiero usar. Y preguntar si no volvio NULL,para no romper
    //sizeof cuenta la memoria que ocupa/necesita ePersona

   /* puntero->legajo= 1000;
    puntero->sexo='m';
    puntero->altura=1.80;
*/
    return puntero;//lo unico que trasciende el scope
}
ePersona* new_Persona_Parametros(int legajo,char sexo,float altura)
{
    ePersona* p = new_Persona();  //(ePersona*) malloc(sizeof(ePersona));
    if(p!=NULL)
    {
        p->legajo = legajo;
        p->sexo = sexo;
        p->altura = altura;
    }

    return p;
}


void mostrarPersona(ePersona* unaPersona)
{
    printf("La persona es: \n");
    printf("%d--%c--%.2f",unaPersona->legajo,unaPersona->sexo, unaPersona->altura);
}

void delete_Persona(ePersona* unaPersona)
{
    free(unaPersona);
}
