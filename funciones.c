
#include "holberton.h"

/**
 *op_c - Entry point 
 *@op_d: va_list printf function
 *retur: aun estoy por ver que retonrna, 
 */

int print_char(va_list types) /*char*/
{

    _putchar(va_arg(types, int));

    return (1); /*creo que retorna 1 , hasta ahora funciona*/

    /*caso de prueba*/
    /*_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');*/
}

int print_string(va_list types)
{
    char *x = va_arg(types, char *);
    int contador = 0;

    if (x == NULL) /*pongo NULL ya por costumbre*/
    {
        x = "(null)"; /* tambien lo pongo por costumbre*/

        /* aqui recorro el string  "X" si no me equivoco, ya no se si es string o arreglo ,  y lo almaceno en "contador"*/

        while (x[contador] != '\0')
        {
            _putchar(x[contador]);
            contador++;
            return (contador); /* retornamos para que se siga imprimiento lo restante en el main*/

            /*caso de prueba */
            /*_printf("String:[%s]\n", "I am a string !");
            printf("String:[%s]\n", "I am a string !");*/
        }
    }
}

int print_percent(__attribute__((unsused)) va_list types) /** aqui estoy viendo que se usa __attribute__*/
{
    _putchar('%');
    return (1);
    /* caso de prueba*/

    /*len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");*/
}

int print_int(va_list types)
{
    /*caso de prueba*/
    /*_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);*/

	unsigned int g, f, c = 0, i = 0;
	unsigned long int b = 1;
	int num = va_arg(types, int);

	if (num == 0)
	{
		_putchar(num + '0');
		return (i + 1);
	}
	if (num < 0)
	{
		_putchar('-');
		g = num * (-1);
	}
	else
	{
		g = num;
	}

	f = g;
	while (g != 0)
	{
		g = g / 10;
		b = b * 10;
		c++;
	}
	b = b / 10;
	i = c;
	while (c != 0)
	{
		_putchar((f / b) + '0');
		f = f % b;
		b = b / 10;
		c--;
	}
	if (num < 0)
		i++;

	return (i);

}

int print_binary(va_list types)
{
}

int print_unsigned(va_list types)
{

}
int print_unsgd_octal(va_list types)
{
}
int print_unsgd_hexadecimal(va_list types)
{
}
int print_hexa_upper(va_list types)
{
}