// Print numbers from 1 to 10
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
    double rand1 =  rand() / (double)RAND_MAX;
    printf("%f ", rand1);
  }
  return 0;
}
