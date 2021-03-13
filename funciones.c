
#include "holberton.h"

/**
 *op_c - Entry point 
 *@op_d: va_list printf function
 *retur: aun estoy por ver que retonrna, 
 */

int op_c(va_list op_l) /*char*/
{

    _putchar(va_arg(op_l, int));

    return ("aun no hago el main principal");
    /*caso de prueba*/
    /*_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');*/
}

/* aqui se supone que llega un string*/
/* lo que voy a tratar es imprimir el string */
/* aun no se si tiene que retornar algo asi que el return lo dejare vacio*/

int op_s(va_list op_l)
{
    char *x = va_arg(op_l, char *);
    int contador = 0;

    if (x == NULL) /*pongo NULL ya por costumbre*/
    {
        x = "(null)"; /* tambien lo pongo por costumbre*/

        /* aqui recorro el string  "X" si no me equivoco, ya no se si es string o arreglo ,  y lo almaceno en "contador"*/

        while (x[contador] != '\0')
        {
            _putchar(x[contador]);
            contador++;
            return ("aun no se si voy a usar return");

            /*caso de prueba */
            /*_printf("String:[%s]\n", "I am a string !");
            printf("String:[%s]\n", "I am a string !");*/
        }
    }
}

int op_s(va_list op_l)
{
}

int op_mod(va_list op_l) /** aqui estoy viendo que se usa __attribute__ pero aun no lo implemento*/
{
    _putchar('%');
    return (" retorna algo ");
    /* caso de prueba*/

    /*len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");*/
}

int op_d(va_list op_l) /* creo que el caso i y d irian aqui , aun no estoy seguro*/
{

    /* aqui va el caso de prueba en caso de string en negativo  pero aun no veo la logica de quitar el negativo y imprimir lo demas , no la recuerdo*/
}