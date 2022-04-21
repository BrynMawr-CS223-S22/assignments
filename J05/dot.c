#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <pthread.h>

#define SIZE 100000

int main(int argc, char *argv[]) {
  srand(time(0));

  int v[SIZE];
  int u[SIZE];
  int dotproduct = 0;
   
  for (int i = 0; i < SIZE; i++) {
    v[i] = rand() % 1000 - 500;
    u[i] = rand() % 1000 - 500;
    dotproduct += u[i] * v[i];
  }
  printf("Ground truth dot product: %d\n", dotproduct);

  // TODO: Implement your thread solution here
  printf("Test with 4 threads\n");

  return 0;
}
