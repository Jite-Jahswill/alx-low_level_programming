# C - Bit manipulation :file_folder:


## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files

----

## Header File

* [main.h](./main.h): The Prototypes

## The table below illustrates files and it's corresponing prototype.

| File                   | Prototype                                                           |
| ---------------------- | ------------------------------------------------------------------- |
| `0-binary_to_uint.c`   | `unsigned int binary_to_uint(const char *b);`                       |
| `1-print_binary.c`     | `void print_binary(unsigned long int n);`                           |
| `2-get_bit.c`          | `int get_bit(unsigned long int n, unsigned int index);`             |
| `3-set_bit.c`          | `int set_bit(unsigned long int *n, unsigned int index);`            |
| `4-clear_bit.c`        | `int clear_bit(unsigned long int *n, unsigned int index);`          |
| `5-flip_bits.c`        | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` |
| `100-get_endianness.c` | `int get_endianness(void);`                                         |

## Tasks :page_with_curl:

* `0. 0`
  * [0-binary_to_uint.c](./0-binary_to_uint.c): C function that converts a binary number
  to an `unsigned int`.
  * The parameter `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are
  not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.

* `1. 1`
  * [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation
  of a number.

