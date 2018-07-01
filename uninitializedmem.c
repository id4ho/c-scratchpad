#include <stdio.h>

int main()
{
  int number = 100;

  // interestingly, the missing interpolation variable in the first printf
  // statement changes each time you run the compiled file, but the second is
  // always 73832. If you uncomment the first printf statement the digits are
  // stable and don't change every time you run the compiled code. The %s's lead
  // to seg faults (normally) presumably because there isn't a null byte before
  // the printf statement get's to a region of memory to which it doesn't have
  // access. The %d limits the size of the expected interpolated value so it
  // doesn't (normally) get to an inaccessible region.

  /* printf("something"); */
  printf("number: %d\n");
  /* printf("string: %s\n"); */
  printf("hello");
  /* printf("string: %s\n"); */
  printf("number: %d\n");
  return 0;
}
