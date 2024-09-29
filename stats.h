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
 * @file stats.h
 * @brief Initial C Programing 
 *
 * <Add Extended Description Here>
 *
 * @author Harvish Mehta
 * @date 09/28/2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

//void print_statistics(); // Print Statistics of array min, max, and mean 

//Given an array of data and a length, prints the array to the screen
void print_array(char array[], int size) 
{
	for(int i = 0; i < size; i++)
		{
			printf("%s ",array[i]);
		}
}

//Given an array of data and a length, returns the median value
float find_median(char array[], int size) 
{


}

//Given an array of data and a length, returns the mean value
float find_mean(char array[], int size) 
{
	float sum = 0;
	for(int i = 0; i < size; i++)
		{
			sum = sum + (int)array[i];	
		}
	float mean = sum/size;
	return mean;

}

 //Given an array of data and a length, returns the max
int find_maximum(char array[], int size)
{
	int max = 0;
	for(int i = 0; i < size; i++)
		{
			if (max <= (int)array[i])
				max = (int)array[i];
		}
	return max;
}
int find_minimum(char array[], int size) //Given an array of data and a length, returns the min
{
	int min = 0;
	for(int i = 0; i < size; i++)
		{
			if (min >= (int)array[i])
				min = (int)array[i];
		}
	return min;
}

int sort_array(char array[], int size) //Given an array of data and a length, returns the largest to smallest

{
	int sortedArray[size];

	for(int m = 0; m < size; m++)
		{

			for(int b = 0; b < size; b++)
				{
	
				}

		}
	return sortedArray;
}

#endif /* __STATS_H__ */
















