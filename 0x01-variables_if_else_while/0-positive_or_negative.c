#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * Description: tell if a number is positive or negative
 *
 * Return: Always 0 (Success)
 **/
 int main(void)
 {
 int n;
  srand(time(0));
  n = rand() - RAND_MAX /2;
  if (n > 0)
  {
  printf("%n : is positive\n");
  }
  else
  if{
  printf("%n : is negative\n");
  }
  else{
  return (0);
  }
  }
