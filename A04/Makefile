CC=gcc
% :: %.c
	$(CC) -g $< -o $@

test_ppm : test_ppm.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror test_ppm.c read_ppm.c -o $@

ascii_image : ascii_image.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror ascii_image.c read_ppm.c -o $@
