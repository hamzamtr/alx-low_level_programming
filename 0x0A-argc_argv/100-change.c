#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of \
money, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int change[] = {25, 10, 5, 2, 1}, i = 0, min = 0, amt;
if (argc != 2)
{
printf("Error\n");
return (1);
}
amt = atoi(argv[1]);
if (amt < 0)
{
printf("%d\n", 0);
return (0);
}
while (amt)
{
if (amt < change[i])
i++;
else if (i > 5)
i = 0;
min = min + (amt / change[i]);
amt = amt % change[i];
}
printf("%d\n", min);
return (0);
}
