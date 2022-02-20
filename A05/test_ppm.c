#include <stdio.h>
#include "read_ppm.h"

int main(int argc, char** argv) {
  int w, h;
  char* filename = "feep-raw.ppm";
  struct ppm_pixel* pixels = read_ppm(filename, &w, &h);
  printf("Testing file %s: %d %d\n", filename, w, h); 

  return 0;
}

