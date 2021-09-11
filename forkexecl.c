#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  
  char *binaryPath = "printmyname";  
  char *arg1 = "-lh";
  char *arg2 = "/home";

  printf("Fork of printmyname using execl:\n");
  fork();
  execl(binaryPath, binaryPath, arg1, arg2, NULL);
    
  return 0;
}
