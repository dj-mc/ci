#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double array_of[5] = {
      [1] = 4.20,
      [0] = 11.0909,
      [4] = 6.022E+23,
      [3] = 0.00007,
  };

  for (size_t i = 0; i < 5; ++i) {
    printf("Element: %zu is %g, and its square is %g\n", i, array_of[i],
           array_of[i] * array_of[i]);
  }

  return EXIT_SUCCESS;
}
