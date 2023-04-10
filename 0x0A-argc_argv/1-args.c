#include <stdio.h>
/**
 *main - prints argument count
 *@argc: argument count
 *@argv: array of pointers
 *Return: int
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
