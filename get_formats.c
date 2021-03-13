#include "holberton.h"

fmt_t *get_formats(char fmt) {
  fmt_t fmts[] = {
    {'c', print_char},
    {'s', print_string},
    {'%', print_percent},
    {'i', print_int},
    {'d', print_int},
    {'x', print_hexadecimal},
    {'X', print_hexa_upper},
    {'\0', NULL}
  };

  return fmts;
}