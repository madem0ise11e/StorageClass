#include<stdio.h>

int main (void)
{
  for (int i = 0; i < 5; ++i)
  { printf("C programming"); }
  //Error: i is not declared at this point
  printf("%d", i);
  return 0;
}
