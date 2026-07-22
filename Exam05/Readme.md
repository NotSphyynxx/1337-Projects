# Exam 05 📚

This repository contains my practice code and solutions for Exam 05, organized by difficulty level. It covers advanced C and C++ concepts, including algorithm design, object-oriented programming, and memory management.

## Directory Structure

### Level 1 (C++ Object-Oriented Programming)

This level focuses on C++ classes, operator overloading, and inheritance patterns.

* **`bigint/`**:
  * *Concept:* Implementation of a custom class to handle arbitrarily large integers that exceed the capacity of standard C++ numeric types (like `long long`).
  * *Skills:* Dynamic memory management, string manipulation for math, and extensive operator overloading (`+`, `-`, `=`, etc.).

* **`polyset/`**:
  * *Concept:* Building a wrapper around underlying data structures (arrays and binary search trees) to create functional "bag" and "set" containers.
  * *Skills:* Abstract classes (interfaces), multiple and virtual inheritance (to avoid the diamond problem), composition, and Orthodox Canonical Form (OCF).

* **`vect2/`**:
  * *Concept:* Creating a 2D vector mathematical class.
  * *Skills:* Mathematical operations, operator overloading, and standard C++ class design.

### Level 2 (C Algorithms & Simulation)

This level focuses on complex algorithmic problem-solving and simulations written in C.

* **`bsq/`**:
  * *Concept:* "Biggest Square". An algorithmic challenge to find the largest possible square of empty space on a grid filled with obstacles.
  * *Skills:* File I/O parsing, 2D array manipulation, and specifically **Dynamic Programming** to efficiently calculate maximum square sizes without brute-forcing.

* **`game_of_life.c`**:
  * *Concept:* Implementation of Conway's Game of Life cellular automaton, combined with a custom "drawing" phase parsed from standard input.
  * *Skills:* Processing standard input streams (`read`), simulating cellular automata rules (survival, reproduction, under/over-population) across generations, and careful array boundary management using Variable Length Arrays (VLAs).

**Ciao**