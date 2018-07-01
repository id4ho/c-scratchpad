#include <stdio.h>

int main(int argc, char *argv[])
{
  // argc will contain the count of args + 1 for the name of the compiled file
  printf("This is the number of args: %d.\n", argc);
  printf("here are the passed args:\n");
  // loop over argv for argc times
  int i;
  for(i = 0; i < argc; i = i + 1) {
    printf("%s\n", argv[i]);
  }
  return 0;
}
