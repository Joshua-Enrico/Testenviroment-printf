
#include "holberton.h"
#include <stdio.h>

/**
 *op_c - Entry point 
 *@op_d: va_list printf function
 *retur: aun estoy por ver que retonrna, 
 */
int op_c(va_list op_d) /*char*/
{

    _putchar(va_arg(op_d, int));

    return ("aun no hago el main principal");
}
/* aqui se supone que llega un string*/
/* lo que voy a tratar es imprimir el string */
/* aun no se si tiene que retornar algo asi que el return lo dejare vacio*/

int op_ss(va_list op_d)
{
    char *x = va_arg(op_d, char *);
    int contador = 0;

    if (x == NULL) /*pongo NULL ya por costumbre*/
    {
        s = "(null)"; /* tambien lo pongo por costumbre*/

        /* aqui recorro el string "s" y lo almaceno en "contador"*/

        while (x[contador] != '\0')
        {
            _putchar(s[contador]);
            contador++;
            return ("aun no se si voy a usar return");
        }
    }
}
int op_i(va_list op_d) /*entero*/
{
    
}
int op_dd(va_list op_d)
{
}
int op_z(va_list op_d)
{
}