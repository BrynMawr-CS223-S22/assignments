CC=gcc
% :: %.c
	$(CC) -g -Wall -Wvla -Werror $< -o $@

all: thread_mandelbrot  buddhabrot

thread_mandelbrot: thread_mandelbrot.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror -Wno-unused-variable thread_mandelbrot.c read_ppm.c -o $@ -lm -lpthread

buddhabrot: buddhabrot.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror -Wno-unused-variable buddhabrot.c read_ppm.c -o $@ -lm -lpthread

clean: 
	rm thread_mandelbrot buddhabrot

