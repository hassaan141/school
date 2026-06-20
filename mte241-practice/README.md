# C Practice Setup

The Mac development tools already provide `clang` (the C compiler), `make`,
and the system C libraries. No additional compiler installation is required.

From this directory, run:

```sh
make
./hello
```

Or compile directly:

```sh
clang -std=c17 -Wall -Wextra -Wpedantic -Werror -g hello.c -o hello
./hello
```

Useful commands:

- `make run`: build and run the program
- `make clean`: remove the compiled executable
- `lldb ./hello`: debug the program

The warning flags deliberately make the compiler strict. This catches many C
mistakes early, which is especially useful for systems and RTOS code.
