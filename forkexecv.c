#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  
  char *binaryPath = "printmyname";
  char *args[] = {binaryPath, "-lh", "/home", NULL};

  printf("Fork of printmyname using execv:\n");
  fork();
  execv(binaryPath, args);
    
  return 0;
}
