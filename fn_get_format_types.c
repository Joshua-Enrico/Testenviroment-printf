#include "holberton.h"

fmt_t *get_format_types() {
	return {
        {"c", print_char}, 
        {"s", print_string},
        {"%", print percent},
        {"i", print_int},
        {"d", print_int},
        {"b", print_binary},
        {"u", print_unsigned},
        {"o", print_unsgd_octal},
				{"x", print_unsgd_hexadecimal}, 
        {"X", print_hexa_upper}, 
        {NULL, NULL}
    };
}