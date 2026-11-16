# MyPrintf

> **Full-featured formatted printing engine in C.**

## Overview
Complete reimplementation of standard `printf(3)` handling argument parsing, format specifiers, precision modifiers, and padding:
- Specifiers: `%d`, `%i`, `%u`, `%o`, `%x`, `%X`, `%b` (binary), `%c`, `%s`, `%p`, `%f`, `%%`
- Field width, zero-padding (`0`), left-alignment (`-`), plus sign (`+`), space flags
- Precision modifiers (`.precision`)

## Build
```bash
make
```
Produces `libmy.a`.

## License
Open-source under MIT License.
