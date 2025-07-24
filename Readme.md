# CS221 Program 1: Shape Hierarchy

**Author:** Cyle Dean Vernon Roberts  
**Email:** cyledvroberts@gmail.com or cdr0025@uah.edu  
**Course:** CS221-02, Spring 2023  
**Instructor:** Mrs. C. Delugach

---

## Overview

This project implements a simple class hierarchy in C++ for shapes. It includes:

- A base class: `Shape`
- Two derived classes: `Circle` and `Triangle`

Each class supports basic properties like shape type, number of sides, fill color, and border color. It also includes methods to compute area and perimeter.

---

## Files

- `Shape.h` / `Shape.cpp` – Base class defining general shape behavior.
- `Circle.h` / `Circle.cpp` – Inherits from `Shape`, models a circle.
- `Triangle.h` / `Triangle.cpp` – Inherits from `Shape`, models a triangle.
- `main.cpp` – **Sample main file** to test class functionality.

---

## Prerequisites

To build and run this program, you will need:

- A C++ compiler that supports C++11 or higher (such as `g++` or `clang++`)
- A development environment (e.g., VS Code, Code::Blocks, or terminal/command-line)
- (On Windows) Ensure `g++` or `clang++` is correctly configured in your PATH

---

## Assignment instructions:

> **The instructor is expected to provide their own `main.cpp` for grading.**

The included `main.cpp` is **just an example written by myself** to demonstrate class functionality.

---

## Compilation

### Last compiled using clang:

clang++ main.cpp Shape.cpp Circle.cpp Triangle.cpp -o main.exe
