<h1 align="center">ft_printf </h1>

<h2><em><p align="center" style="italic">"Because i’m tired of using putnbr and putstr"</p></em></h2>

![Score](./README/letters.jpg)

> <h3 align="center">"The key to a successful ft_printf is a well-structured and good extensible code."</h3>

<h2 align="center">
	<a href="#description">Description</a>
	<span>·</span>
	<a href="#usage">Usage</a>
	<span>·</span>
	<a>Testing</a>
</h2>

## Description

Coding legendary `printf` function from the scratch.\
Specifiers included:
| Specifier |
| --- |
| `c` |
| `s` |
| `p` |
| `d` |
| `i` |
| `o` |
| `u` |
| `x` |
| `X` |
| `f` |

| Specifier | %c | %s | %p | %d | %i | %o | %u | %x | %X | %f  |  %% | %c |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

In this project basic idea is first study and then remake **printf** function found from ANCI C standard library.

## 🛠 Usage 🛠


In the root of the repository you have the `Makefile`, that will handle the compiling of the library.

1. At the root of the repository simply run `make`. This will
compile the library and the name will be `libprintf.a`

2. To use the `ft_printf` simply compile your `.c` file/files and the `libprintf.a`.
```c
/* main.c */
#include "./includes/ft_printf.h"

int	main(void)
{
	ft_printf("Hello World!\n");
}
```

```
gcc main.c libprintf.a
./a.out
Hello World!
```
Here is basic format of how you can use ft_printf specifiers:\
`%[$][flags][width][.precision][length modifier]conversion`

## Testing 👷🏽

`Makefile` can be used to test different
`make test`

## PDF

[PDF of ft_printf](https://cdn.intra.42.fr/pdf/pdf/6609/ft_printf.en.pdf)

### Keywords

- Project scalability
- Reverse engineering
- Variadic functions
- Dispatcher/Jump table in C
- Array of function pointers
