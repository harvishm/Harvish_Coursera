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
// Function Prototypes
void print_statistics(unsigned char array[], int size);
void print_array(unsigned char array[], int size);
float find_median(unsigned char array[], int size);
float find_mean(unsigned char array[], int size);
int find_maximum(unsigned char array[], int size);
int find_minimum(unsigned char array[], int size);
void sort_array(unsigned char array[], int size);

#endif /* __STATS_H__ */
















