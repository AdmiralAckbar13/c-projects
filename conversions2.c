#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Conversions2.c [Shane Roeseberg]
//Converts Celsius to Fahrenheight
//Improved version of Conversions.c

#define BUFFER_SIZE 0x20

int main(int argc, char **argv)
{
	char buffer [BUFFER_SIZE];
	char *exitword = "stop";
	float celsius, fahrenheit;

	while (0x01)
	{
		memset(buffer, 0x00, BUFFER_SIZE);
		printf("\n");
		printf("Type 'stop' at any point to exit the program.");
		printf("\n");
		printf("Please input a temperature in Celsius (type '%s' to stop): ", exitword);

		if(fgets(buffer, BUFFER_SIZE - 0x01, stdin) == NULL)
		{
			fprintf(stderr, "Unable to read user input\n");
			fprintf(stderr, "Please try again\n");
			continue;
		}

		if(strncmp (buffer, exitword, strlen (exitword)) == 0x00)
		{
			printf("Good bye!\n");
			printf("\n");
			break;
		}

		if((celsius = strtof(buffer, NULL)) == 0)
		{
			fprintf(stderr, "Unable to convert user input to floating point number.\n");
			fprintf(stderr, "Please try again,\n");
			continue;
		}
		fahrenheit = (1.8 * celsius) + 32;
		printf("temperature in Fahrenheit: %f\n", fahrenheit);
	}

	return EXIT_SUCCESS;
}