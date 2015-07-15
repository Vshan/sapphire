#include<stdio.h>

static char input[2048];

int main(int argc, char** argv) {

  puts("Sapphire Version 0.0.0.0.1");
  puts("Press Ctrl+C to exit.\n");

  while(1) {
    fputs("sapphire> ", stdout);
    fgets(input, 2048, stdin);
    printf("you entered: %s", input);
  }
  return 0;
}
