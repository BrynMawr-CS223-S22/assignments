CC=gcc
% :: %.c
	$(CC) -g -Wall -Wvla -Werror $< -o $@

all: dot

dot: dot.c
	$(CC) -g -Wall -Wvla -Werror -Wno-unused-variable dot.c -o $@ -lm -lpthread

clean: 
	rm dot

