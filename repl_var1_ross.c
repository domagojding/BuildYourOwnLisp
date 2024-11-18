#include <stdio.h>
#include <stdbool.h>

static char input[2048];

int main(int argc, char** argv) {

  /* Print version and exit information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit");

  FILE* my_repl = fopen ("repl.txt", "w");

  /* In a neverending loop */

  bool x = true;
  while(x) {

    // Output our prompt
    fprintf(my_repl, "lispy> ");
    fputs("lispy> ", stdout);

    // Read a line of user input of maximum size 2048
    fgets(input, 2048, stdin);
    
    if (input [0] == 'q') {
      x = false;
    } else {

      // Echo input back to the user
    fprintf(my_repl, "No you're a %s", input);
    printf("No yo're a %s", input);
    }
  }

  fclose(my_repl);
  return 0;
}
