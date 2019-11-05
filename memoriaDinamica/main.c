#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{

    ePersona* puntero = new_Persona_Parametros(1000,'c',1.78);
    int x;

    if(puntero!=NULL)
    {
        mostrarPersona(puntero);
    }

    delete_Persona(puntero);


    return 0;
}
      //  free()//recibe un puntero y libera todo lo que tiene tomado
