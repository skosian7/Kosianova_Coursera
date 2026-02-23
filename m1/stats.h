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
 * @brief Working with an array of numerical values
 *
 * Calculating and printing statistical data about the array, sorting the array
 *
 * @author Nila Kosianova
 * @date February 2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__ 

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints statistics
 *
 * prints minimum, maximum, mean, and median of a given array
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *
 * @return void
 */

void print_statistics(unsigned char *test, int len);

/**
 * @brief <Prints an array of unsigned chars>
 *
 * <Prints the array to the screen>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <void>
 */

void print_array(unsigned char *test, int len);

 /**
 * @brief <Finds median value>
 *
 * <Finds median value of an array>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <unsigned char median value>
 */

 unsigned char find_median(unsigned char *test, int len);

  /**
 * @brief <Finds mean value>
 *
 * <Finds mean value of an array>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <unsigned char mena value>
 */

 unsigned char find_mean(unsigned char *test, int len);

  /**
 * @brief <Finds maximum>
 *
 * <Finds maximum of an array>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <unsigned char maximum>
 */

 unsigned char find_maximum(unsigned char *test, int len);

   /**
 * @brief <Finds minimum>
 *
 * <Finds minimum of an array>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <unsigned char minimum>
 */

 unsigned char find_minimum(unsigned char *test, int len);

  /**
 * @brief <Sorts an array>
 *
 * <Sorts an array from largest to smallest>
 *
 * @param <test> <unsigned char array>
 * @param <len> <length of the array>
 *  
 * @return <void>
 */

 void sort_array(unsigned char *test, int len);

#endif /* __STATS_H__ */
