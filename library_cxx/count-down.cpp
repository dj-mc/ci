#include <iostream>

void count_down_loop(int countFrom = 10) {
  int timer = countFrom;

  printf("Counting down...\n%d\n", countFrom);

  while (timer > 0) {
    timer = timer - 1;
    std::cout << timer << std::endl;
  }
}

void count_down_recur(int n = 10) {
  if (n == 0)
    std::cout << 0 << std::endl;
  else {
    std::cout << n << std::endl;
    count_down_recur(n - 1);
  }
}

int main() {
  count_down_loop();
  count_down_recur();
  return 0;
}
