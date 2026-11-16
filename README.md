# 🖨️ MyPrintf — Formatted Output Printing Engine in C

[![Language: C](https://img.shields.io/badge/Language-C-00599C.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Build: Make](https://img.shields.io/badge/Build-Makefile-orange.svg)](Makefile)
[![Module: B-CPE-101](https://img.shields.io/badge/Epitech-B--CPE--101-blue.svg)](https://www.epitech.eu/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Epitech: Tek1](https://img.shields.io/badge/Epitech-Tek1-005696.svg)](https://www.epitech.eu/)

> **MyPrintf is a comprehensive reimplementation of the standard C `printf(3)` function**, written using variadic argument lists (`stdarg.h`).

---

## ⚙️ Supported Format Specifiers & Flags

- **Specifiers:**
  - `%d`, `%i`: Signed integers
  - `%u`: Unsigned decimal integers
  - `%o`: Unsigned octal integers
  - `%x`, `%X`: Unsigned hexadecimal integers (lowercase/uppercase)
  - `%b`: Binary representation
  - `%c`: Single character
  - `%s`: String
  - `%p`: Memory pointer address (`0x...`)
  - `%f`, `%F`: Floating-point numbers
  - `%%`: Literal percent sign
- **Modifiers:**
  - Width field and padding
  - Zero-padding (`0`)
  - Left-justification (`-`)
  - Sign specification (`+` and space)
  - Precision modifiers (`.precision`)

---

## 🛠️ Build & Usage

```bash
make
# Produces libmy.a
```

---

## 📜 License

Licensed under the **MIT License with attribution** to Lucas Lhomme (Crabe).
