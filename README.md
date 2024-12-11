# C Undefined Behavior: Freeing a Pointer Not Dynamically Allocated

This repository demonstrates a common error in C programming: attempting to free a pointer that was not allocated using `malloc`, `calloc`, or similar dynamic memory allocation functions.  This leads to undefined behavior, which can manifest in various unpredictable ways, including crashes or seemingly random results. 

## The Problem

The `bug.c` file contains code that assigns a pointer (`ptr`) to the address of a local variable (`x`). Then, it attempts to free this pointer using `free()`. This is incorrect because `free()` should only be used on pointers that were previously allocated using `malloc`, `calloc`, or `realloc`.  Freeing a pointer that wasn't dynamically allocated results in undefined behavior.

## The Solution

The `bugSolution.c` file demonstrates the correct approach.  If dynamic memory allocation is needed, memory should be allocated using `malloc` or `calloc`. Once the dynamically allocated memory is no longer needed, it should be freed using `free()` to prevent memory leaks.