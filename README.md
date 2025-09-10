# 🖨️ ft\_printf

Custom reimplementation of the standard C `printf()` function. Provides a drop-in `ft_printf()` alternative designed for integration into `libft` and other C projects.

---

## Build and run

```bash
# Clone
 git clone https://github.com/cmunoz-g/printf.git
 cd printf

# Build static library
 make
```

This produces `libftprintf.a`.

Include it in your project:

```c
#include "ft_printf.h"
...
ft_printf("Hello, %s!\\n", "world");
```

Compile with:

```bash
gcc main.c -L. -lftprintf -o my_program
```

---

## Supported conversions

* `%c` — character
* `%s` — string
* `%p` — pointer (hexadecimal)
* `%d` — decimal integer
* `%i` — integer (base 10)
* `%u` — unsigned decimal
* `%x` — lowercase hexadecimal
* `%X` — uppercase hexadecimal
* `%%` — literal percent sign

---

## Implementation details

* **Variadic functions** — uses `va_start`, `va_arg`, and `va_end` to handle variable argument lists.
* **Modular design** — separate functions for each conversion and formatting rule.

---

