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
#ifndef __STATS_H__
#define __STATS_H__


void print_stats(unsigned char array[], unsigned int length);



void print_array(unsigned char array[], unsigned int length);


unsigned char median_func(unsigned char array[], unsigned int length);


unsigned char min_func(unsigned char array[], unsigned int length);


unsigned char max_func(unsigned char array[], unsigned int length);



unsigned char mean_func(unsigned char array[], unsigned int length);

void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */
