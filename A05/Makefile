CC=gcc
% :: %.c
	$(CC) -g -Wall -Wvla -Werror $< -o $@

test_ppm : test_ppm.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror test_ppm.c read_ppm.c -o $@

decode : decode.c read_ppm.c
	$(CC) -g -Wall -Wvla -Werror decode.c read_ppm.c -o $@
