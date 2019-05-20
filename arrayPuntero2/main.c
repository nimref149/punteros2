#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int numero;
    double importe;
    char Tipo;
}eFactura;
int main()
{
    eFactura PrimerFactura={1,23.2,'A'};
    eFactura *pFactura;
    pFactura =&PrimerFactura;
    printf("%d",sizeof(eFactura));




    return 0;
}
