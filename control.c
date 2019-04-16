#include "holberton.h"

/**
 * control - handiling ^C
 * @n: comand
 * Return: void
 */
void control(int n )
{
	if(n)
	write(2, "\n[$] ", 5);
}
