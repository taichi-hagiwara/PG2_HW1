CC := gcc
CFLAGS := -Wall -Wextra -O2

TARGETS := kadai1 kadai2 kadai3 kadai4 kadai5

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)