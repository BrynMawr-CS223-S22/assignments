#ifndef PPM_READ_H_
#define PPM_READ_H_

struct ppm_pixel {
  union {
    struct {
      unsigned char red;
      unsigned char green;
      unsigned char blue;
    };
    unsigned char colors[3];
  };
};

extern struct ppm_pixel* read_ppm(const char* filename, int* w, int* h);
extern void write_ppm(const char* filename, struct ppm_pixel* pxs, int w, int h);

#endif

