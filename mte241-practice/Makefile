CC := clang
CFLAGS := -std=c17 -Wall -Wextra -Wpedantic -Werror -g

.PHONY: all run clean

all: hello

hello: hello.c
	$(CC) $(CFLAGS) $< -o $@

run: hello
	./hello

clean:
	rm -f hello
