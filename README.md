# printf()

This project is a collaboration betweene Christopher Sesugh and Daniel Ugwuanya, software engineering students at ALX.
The `_printf` function imitates the actual `printf` function found in manual 3 of 'printf'.

The `_printf()` function performs formatted output conversion and print data, with the prototype

```
int _printf(const char format, ...)
```

Where format contains the string that is printed. As `_printf()` is variadic function, it can receives `n` arguments that replace by `n` tags written inside the string.

The format tags prototype is the following:

```
%[flags][length]specifier
```

The return value of the program is the amount of chars printed.

| Specifier | Description            |
| --------- | ---------------------- |
| c         | Character              |
|s| String|
|%|Percent|
| d or i    | Signed decimal integer |
|b|Signed binary|

|Flag|Description|
|-----|----------|
|+|Prints a plus sign (+) when the argument is a positive number, otherwise prints a minus sign|
|(space)|Prints a blank space if the argument is a positive number|
|#|Prints 0, 0x and 0X for o, x, and X specifiers respectively. Doesn't print anything if the argument is zero|

|Length|Description|Specifiers|
|------|-----------|----------|
|I|Prints long int or unsigned long int|i,d,o,u,x, and X|
|h|Prints a short int or unsigned short int|i,d,o,u,x, and X|
# File Functions
## _printf.c
File for printf function that performs formatted output conversion and data
output
## main.h
Header file for all function prototypes

