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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

	print_stats(test, SIZE);
  
  
  
  

}

void print_stats(unsigned char array[], unsigned int len)
{

	printf("The array declared: \n\n");
	
	print_array(array, len);
	sort_array(array,len);
	
	printf("The Sorted array\n");
	print_array(array, len);
	printf("The median is: %d\n",median_func(array,len));
	printf("The mean is: %d\n",mean_func(array,len));
	printf("The max is: %d\n",max_func(array,len));
	printf("The min is: %d\n",min_func(array,len));
}

void print_array(unsigned char array[], unsigned int length){
	for(int i = 0; i < length/8; i++){
		for(int j = 0; j < length/5; j++){
		       printf("%3d  ", array[8*i+j]);
		}
 		printf("\n");
	}
	
	printf("\n");	
	return;
}

unsigned char median_func(unsigned char array[], unsigned int len){
	return array[(len-1)/2];
}

unsigned char mean_func(unsigned char array[], unsigned int len){
	unsigned int sum = 0;
	for(int i = 0; i < len; i++){
		sum += array[i];	
	}

	return (unsigned char)( sum / len );
}

unsigned char max_func(unsigned char array[], unsigned int len){
	return array[len-1];
}

unsigned char min_func(unsigned char array[], unsigned int len){
	return array[0];
}

void sort_array(unsigned char array[], unsigned int len){
	unsigned char tmp;
	for(int i = 0; i < len; i++){
		for(int j = i; j < len; j++){
			if(array[j] < array[i]){
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
	return;
	
}







/* Add other Implementation File Code Here */
