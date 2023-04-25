#include <stdio.h>
#include "main.h"

/**
 * main - It prints the name of the program
 * @argc:int
 * @argv:Array of arguments
 * Return:always 0
 */

int main(int argc, char *argv[])
{
	argc++;
	printf("%s\n", argv[0]);

	return (0);
}
