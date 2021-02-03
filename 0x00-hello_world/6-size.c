#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float e;
  printf("Size of a char: %zu bytes", sizeof(a));
  printf("Size of a int: %zu bytes", sizeof(b));
  printf("Size of a long int: %zu bytes", sizeof(c));
  printf("Size of a long long int: %zu bytes", sizeof(d));
  printf("Size of a float: %zu bytes", sizeof(e));
return (0);
}
