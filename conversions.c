#include <stdio.h>
//Conversions.c [Shane Roeseberg]
//Converts Celsius to Fahrenheight

int main(void)
{
	float celsius, fahrenheit;
	while(1) 
	{

		printf("\n");
		printf("Please input a temperature in Celsius (type 'stop' to stop): " );
		if (scanf("%f", &celsius) != 1)
			break;


		fahrenheit = (1.8 * celsius) + 32;
		printf("Temperature in Fahrenheit: %f\n", fahrenheit);
		printf("\n");

	}

	return(0);

}
