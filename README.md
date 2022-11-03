# OperatingSysClass-HW2
Homework 2 of Operating Systems at GSU

3. a) Write a C program to Implement a system of three processes which read and write numbers to
a file. Each of the three processes P1, P2, and P3 must obtain an integer from the file (these
instructions must be executed 200 times). The file only holds one integer at any given time. Given
a file F, containing a single integer N, each process must perform the following steps:
```
1. Fork two processes
For 200 times:
2. Open F
3. Read the integer N from the file
4. Close F
5. Output N and the process' PID (On the screen)
6. Increment N by 1
7. Open F
8. Write N to F (overwriting the current value in F)
9. Close F
```
