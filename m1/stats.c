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
 * @file stats.c
 * @brief Working with an array of numerical values
 *
 * Calculating and printing statistical data about the array, sorting the array
 *
 * @author Nila Kosianova
 * @date February 2026
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *test){
  unsigned char min = find_minimum(test, SIZE);
  unsigned char max = find_maximum(test, SIZE);
  unsigned char mean = find_mean(test, SIZE);
  unsigned char med = find_median(test, SIZE);

  printf("Statistics:\n");
  printf("\tMinimum value is %d\n", min);
  printf("\tMaximum value is %d\n", max);
  printf("\tMean value is %d\n", mean);
  printf("\tMedian value is %d\n", med);
}

void print_array(unsigned char *test, int len)
{
  printf("\nThe array:\n");
  for(int i = 0; i < len; i++)
  {
    if(i%8 == 0)printf("\n\t");
    else printf("%-5d", test[i]);
  }
  printf("\n\n");
}

unsigned char find_median(unsigned char *test, int len)
{
  return 0;
}

unsigned char find_mean(unsigned char *test, int len)
{
  int summ = 0;

  for(int i = 0; i < len; i++)
  {
    summ += test[i];
  }

  return summ/len;
}


