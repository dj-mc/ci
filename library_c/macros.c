#include <stdbool.h>
#include <stdio.h>

#define T 1
#define F 0
typedef int defined_bool;

defined_bool my_custom_bool = F;

typedef enum { fancy_false = (0 == 1), fancy_true = (!fancy_false) } fancy_bool;

fancy_bool my_fancy_bool = fancy_false;

#define DAYS_IN_YEAR 365
#define SECS_IN_HOUR 3600
#define AVERAGE(x, y) ((x + y) / 2)
#define YOUR_MOM "is fat"
#define pf(x) printf(x)

enum days { SUN = 1, MON, TUE, WED, THU, FRI, SAT };

int main() {
  pf("asdf\n");
  printf("Your mom %s\n", YOUR_MOM);
  printf("The day is #%d!\n", FRI);
  printf("%d", my_fancy_bool);

  return 0;
}
