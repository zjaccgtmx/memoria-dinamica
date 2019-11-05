
typedef struct
{
    int legajo;
    char sexo;
    float altura;
}ePersona;

//el tipo de dato a una direccion de memoria es un puntero

ePersona* new_Persona();//constructor por defecto
ePersona* new_Persona_Parametros(int,char,float);//constructor parametrizado

void delete_Persona(ePersona*);
void mostrarPersona(ePersona*);
