# Rush00 – 42 Piscine

## Overview

Rush00 is a collaborative project from the 42 C Piscine designed to strengthen understanding of:

- Basic C programming
- Loops and conditionals
- Modular code organization
- Team collaboration

The goal is to implement a function that prints rectangles of varying sizes using only low-level output (`write`).

---

## Objective

Create a function:

```c
void rush(int x, int y); // i change var names in my code
```

That prints a rectangle of:

- **Width (`x`)** → number of columns  
- **Height (`y`)** → number of rows  

Each Rush variant (Rush00 → Rush04) uses a different pattern of characters.

---

## Project Structure

```
.
├── main.c
├── ft_putchar.c
├── rush00.c
├── rush01.c
├── rush02.c
├── rush03.c
└── rush04.c
```

### File Roles

- **main.c** → Entry point, calls `rush(x, y)`
- **rush0X.c** → Contains rectangle logic
- **ft_putchar.c** → Outputs a single character using `write`

---

## Compilation

Use `gcc` with required flags:

```bash
gcc -Wall -Wextra -Werror main.c rush0X.c ft_putchar.c -o rush
```

Run the program:

```bash
./rush
```

---

## Example Output (Rush0X)

### Input:
```c
rush(5, 3);
```

### Output:
```
+---------+----------------+
| Rush00  | o---o          |
|         | |   |          |
|         | o---o          |
+---------+----------------+
| Rush01  | /***\          |
|         | *   *          |
|         | \***/          |
+---------+----------------+
| Rush02  | ABBBA          |
|         | B   B          |
|         | CBBBC          |
+---------+----------------+
| Rush03  | ABBBC          |
|         | B   B          |
|         | ABBBC          |
+---------+----------------+
| Rush04  | ABBBC          |
|         | B   B          |
|         | CBBBA          |
+---------+----------------+
```
---

## Edge Cases

Your implementation must correctly handle:

- `rush(1, 1)` → single character  
- `rush(x, 1)` → horizontal line  
- `rush(1, y)` → vertical line  
- `rush(0, y)` or `rush(x, 0)` → no output  

---

## Constraints

- Allowed function: `write`
- Must compile with:
  ```
  -Wall -Wextra -Werror
  ```
- Must respect 42 Norm (Norminette)

---

##  Team Work

- Project is done in groups (2–4 students)
- All members must understand the full implementation
- Evaluation includes explanation during defense

---

## Testing

Recommended test cases:

```c
rush(5, 3);
rush(1, 1);
rush(1, 5);
rush(5, 1);
rush(10, 3);
rush(-3, 1)
```

---

## Key Takeaways

- Separation of concerns (multiple files)
- Understanding of 2D logic using loops
- Precision in handling edge cases

---

## License

This project is part of the 42 School curriculum and is intended for educational purposes.

---
Bruh I Don't Like This Readme File Its Just a AI Works But Anyway Its Kind Of Good.

If U Have Any Qs About This Rush > Discord Username : **fdy404**.

I Wish To Being With Smart People In Rush, But If u are Homeless Just Buy a House. 
>  Did u Got The Idea ?
