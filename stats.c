/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**

 *
 * @author Harvish Mehta
 * @date 09/28/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


// Print Statistics of array min, max, and mean
void print_statistics(unsigned char array[], int size) {

	float mean = find_mean(array, size);
	int max = find_maximum(array, size);
	int min = find_minimum(array, size);

	printf("mean is %f\n", mean);
	printf("min is %d\n", min);
	printf("max is %d\n", max);
}

//Given an array of data and a length, prints the array to the screen
void print_array(unsigned char array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

//Given an array of data and a length, returns the median value
float find_median(unsigned char array[], int size)
{
	sort_array(array, size);
	int middle = 0;
	float median;
	if (size % 2 == 0) {
		middle = size / 2;

		median = ((array[middle - 1]) + ((int)array[middle])) / 2.0;
	}
	else {
		median = (array[size / 2 - 1]);
	}
	return median;
}

//Given an array of data and a length, returns the mean value
float find_mean(unsigned char array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + (array[i]);
	}
	float mean = (float)sum / size;
	return mean;

}

//Given an array of data and a length, returns the max
int find_maximum(unsigned char array[], int size)
{
	int max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (max <= (array[i]))
		{
			max = (array[i]);
		}

	}
	return max;
}
int find_minimum(unsigned char array[], int size) //Given an array of data and a length, returns the min
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (min >= (array[i]))
			min = (array[i]);
	}
	return min;
}

void sort_array(unsigned char array[], int size) //Given an array of data and a length, returns the largest to smallest

{
	int maxindex;

	for (int m = 0; m < size; m++)
	{
		maxindex = m;
		for (int b = m + 1; b < size; b++)
		{
			if ((array[b]) > (array[maxindex]))
				maxindex = b;

		}

		if (maxindex != m)
		{
			unsigned char temp = array[m];
			array[m] = array[maxindex];
			array[maxindex] = temp;
		}
	}

}

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  printf("Median is %f\n", find_median(test, SIZE));

  print_statistics(test, SIZE);

  sort_array(test, SIZE);
  for (int i = 0; i < SIZE; i++)
  {
	  printf("%d ", test[i]);
  }

  print_array(test, SIZE);
  
  return 0;


}

/* Add other Implementation File Code Here */
