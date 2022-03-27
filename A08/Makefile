CC=gcc
% :: %.c
	$(CC) -g -Wall -Wvla -Werror $< -o $@

all: benchmark1 benchmark2 reallocate print

print: print.c mylloc_list.c sbrk.c rand.c
	$(CC) -g -Wall -Wvla -Werror print.c mylloc_list.c rand.c sbrk.c -o $@ -lm

benchmark1: benchmark1.c mylloc_list.c rand.c
	$(CC) -g -Wall -Wvla -Werror benchmark1.c mylloc_list.c rand.c sbrk.c -o $@ -lm

reallocate: reallocate.c mylloc_list.c sbrk.c rand.c
	$(CC) -g -Wall -Wvla -Werror reallocate.c mylloc_list.c sbrk.c rand.c -o $@ -lm

benchmark2: benchmark2.c mylloc_list.c sbrk.c rand.c
	$(CC) -g -Wall -Wvla -Werror benchmark2.c mylloc_list.c sbrk.c rand.c -o $@ -lm

clean: 
	rm benchmark1 benchmark2 reallocate print

