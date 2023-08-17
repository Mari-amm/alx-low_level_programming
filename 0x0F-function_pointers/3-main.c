#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int nm, nm2;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

nm = atoi(argv[1]);
op = argv[2];
nm2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && nm2 == 0) || (*op == '%' && nm2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(nm, nm2));
return (0);
}
