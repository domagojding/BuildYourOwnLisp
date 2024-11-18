#include <stdio.h>

void print_hello ()
{
  printf("hello, world\n");
}

void n_times (int n)
{
  int counter = n;
  while (counter > 0)
    {
      // printf("%d\n", counter);
      print_hello();
      counter -= 1;
    }
}

int main(void)
{
  n_times(5);
}
