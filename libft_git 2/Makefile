CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCS = $(wildcard *.c)

PROGS = $(SRCS:.c=)


all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@


clean:
	rm -f $(PROGS) *.exe