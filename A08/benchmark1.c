#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>
#include "rand.h"

#define ROUNDS 10
#define LOOP 100000

int main (int argc, char* argv[]) {
  void *init = sbrk(0);
  void *current;
  printf("The initial top of the heap is %p.\n", init);
  for (int j = 0 ; j < ROUNDS; j++) {
  
    for (int i= 0 ; i < LOOP ; i++) {
      size_t size = randRange(sizeof(int), 4000);
      int *memory = NULL;
      memory = malloc(size);
      if (memory == NULL) {
        fprintf(stderr, "malloc failed\n");
        return(1);
      } 
      *memory = 123;
      free(memory);
    }
    current = sbrk(0);
    int allocated = (int) ((current - init) / 1024);
    printf("%d\n" , j);
    printf("The current top of the heap is %p.\n", current);
    printf("Increased by %d (0x%x) byte\n", allocated, allocated);
  }

  return 0 ;
}
