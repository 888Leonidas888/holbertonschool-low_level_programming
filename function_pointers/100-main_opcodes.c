#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		puts("Error");
		return (2);
	}

	return (0);
}
