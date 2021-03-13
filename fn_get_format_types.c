#include "holberton.h"

fmt_t *get_format_types() {
	return {
        {"c", op_c}, 
        {"s", op_s},
        {"i", op_d},
        {"d", op_d},
				{"x", op_x},
        {"%", op_mod},
        {NULL, NULL}
    };
}