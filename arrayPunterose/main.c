#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int numero;
    char letra;
} eDato;

int mostrarTodosLosDatos(eDato*,int);
int ordenarTodosLosDatos(eDato*,int);
void mostrarUnDato(eDato*);

int main()
{


    eDato muchosDatos[3]= {{1,'C'},{1,'B'},{1,'A'}};
    int estado;

    estado=ordenarTodosLosDatos(muchosDatos,3);
    if(estado==0)
    {

        mostrarTodosLosDatos(muchosDatos,3);

    }
    else
    {

        printf("hubo un error");
    }


    /*
    eDato* pDato;

    pDato=muchosDatos;
    mostrarDatosPunteros(pDato);
    int i;
    for(i=0;i<3;i++){

    printf("%d--%c\n",(*(pDato+i)).numero,(*(pDato+i)).letra);

    }
    */
    return 0;
}

int mostrarTodosLosDatos(eDato* losDatos,int tam)
{
    int i;
    int esNull=1;
    if(losDatos!=NULL&&tam>0)
    {
        for(i=0; i<tam; i++)
        {

            mostrarUnDato(losDatos+i);

        }
        esNull=0;
    }
    return esNull;


}
void mostrarUnDato(eDato* miDato)
{
    printf("%d--%c\n",miDato->numero,miDato->letra);
}

int ordenarTodosLosDatos(eDato* losDatos,int tam)
{
    int i;
    int j;
    eDato aux;
    int esNull=1;
    if(losDatos!=NULL&&tam>0)
    {
        for(i=0; i<tam-1; i++)
        {
            for(j=i+1; j<tam; j++)
            {
                if((losDatos+i)->letra > (losDatos+j)->letra)
                {
                    aux=*(losDatos+i);
                    *(losDatos+i) = *(losDatos+j);
                    *(losDatos+j) = aux;


                }

            }

        }
        esNull=0;
    }
    return esNull;
}














