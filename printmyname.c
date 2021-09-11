#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  if( argc > 3 ) {
    printf("Too many arguments supplied.\n");
  }
  else {
    printf("More argument expected.\n");
  }

  printf("I am a child process [PID = %d].\n", getpid()),
  printf("Program Executed by - %s %s", argv[1], argv[2]);

  return 0;
}
