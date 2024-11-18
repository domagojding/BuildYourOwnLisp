#include <stdio.h>
#include <stdlib.h>

// If we are compiling on windows compile these functions
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

// fake readline function
char* readline(char* prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

// fake and history function
void add_history(char* unused) {}

// otherwise include the editline headers
#else
#include <editline/readline.h>
#endif

int main(int argc, char** argv) {

  // Print version and exit information
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl-C to exit\n");

  while(1) {

    // Output our prompt
    char* input = readline("lambda> ");

    // parse input into an int
    
    
    // add input to history
    add_history(input);

    // Echo input back to user
    printf("you wrote:  %s\n", input);

    // Free retrieved input
    free(input);
  }

  return 0;
}
