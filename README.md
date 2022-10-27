<h1 align="center">ft_printf </h1>

<h2><em><p align="center" style="italic">"Because i’m tired of using putnbr and putstr"</p></em></h2>

![Score](./README/letters.jpg)

> <h3 align="center">"The key to a successful ft_printf is a well-structured and good extensible code."</h3>

<h2 align="center">
    <a href="#💡-description-💡">Description</a>
    <span>·</span>
    <a href="#🛠-usage-🛠">Usage</a>
    <span>·</span>
    <a href="#👷🏽-testing-👷🏽">Testing</a>
</h2>

# 💡 Description 💡

Coding legendary `printf` function from standard ANCI C library.

Conversions included:
| Specifier | `%c` | `%s` | `%p` | `%d` | `%i` | `%o` | `%u` | `%x` | `%X` | `%f`  | `%%` |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

Flags included:
| Flags | `hh` | `h` | `l` | `ll` | `L` | `#` | `0` | `-` | `+` | `' '`  |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |

Here is the basic format of how you can use ft_printf specifiers:\
`%[$][flags][width][.precision][length modifier]conversion`

# 🛠 Usage 🛠

In the root of the repository, you have the `Makefile`, which will handle the compiling of the library.

1. At the root of the repository simply run `make`. This will
compile the library and the name will be `libprintf.a`

2. To use the `ft_printf` simply compile your `.c` file/files and the `libprintf.a`.

```c
/* main.c */
#include "./includes/ft_printf.h"

int main(void)
{
    ft_printf("Hello World!\n");
}
```

```text
gcc main.c libprintf.a
./a.out
Hello World!
```

# 👷🏽 Testing 👷🏽

`Makefile` can be used to test `ft_printf` simply run:\
`make test`\
This will create two files at the root of the repository
1.`printf.txt`
2.`ft_prinft.txt`

You can either use BASH command `diff` to compare two files\
`diff printf.txt ft_prinft.txt`\
But better way is the use VScode feature <em>compare selected</em>:
<video alt="Testing video" src="https://user-images.githubusercontent.com/69038136/198340871-d60b4d31-1477-4f74-827a-3b81a24e0690.mov" height="100" controls></video>

More tests can be added to `main.c` file. This can be found in `eval_tests/` folder.

## PDF

[PDF of the subject](https://cdn.intra.42.fr/pdf/pdf/6609/ft_printf.en.pdf)

### Keywords

- Project scalability
- Reverse engineering
- Variadic functions
- Dispatcher/Jump table in C
- Array of function pointers
