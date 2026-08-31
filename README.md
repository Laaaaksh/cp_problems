# cp_problems

Competitive-programming solutions in C++, written while solving problems from
Codeforces and other judges (AtCoder, CodeChef appear too — filenames like
`atcodercards.cpp` and `segm01codechef.cpp`).

Each file is a self-contained solution named after the problem (a Codeforces
problem ID like `1554A.cpp`, or a descriptive name like `binarysearch.cpp`).
There's no shared structure or library between them — this is a flat folder of
one-off solves, not a maintained algorithms library.

## Status

Active from 2021 to early 2026, on and off. Written for practice, not as a
reference implementation — expect inconsistent style and no tests beyond what
the judge itself ran.

## Running a solution

Each file compiles standalone:

```
g++ -O2 -o solution 158A.cpp
./solution
```
