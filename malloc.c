#include <stdio.h>
#include <stdlib.h>

int main() {

  char* message = malloc(2);
  message[0] = 'H';
  message[1] = '\0';
    
  printf("%s\n", message);

  free(message);
  return 0;
}
