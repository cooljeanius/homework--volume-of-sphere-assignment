/*
 *  VolumeOfSphere.c
 *  VolumeOfSphere
 *
 *  Created by Eric Gallager on 2/2/12.
 *  Copyright 2012 George Washington University. All rights reserved.
 *
 */

#include <stdio.h>
#include <math.h> /* contains pow() */
#define PI 3.14159

int 
main(void)
{
	double centimeters, /* input = centimeters */
	cubiccms; /* output = cubic centimeters */

	/* Ask user for input */
	printf("Enter the sphere's radius in centimeters> ");
	scanf("%lf", &centimeters);

	/* Should convert to cubic centimeters */
	cubiccms = (4.0/3.0) * PI * centimeters * centimeters * centimeters;

	/* Display the result */
	printf("The sphere's volume is %f cubic centimeters.\n \a", cubiccms);

	return (0);
}
