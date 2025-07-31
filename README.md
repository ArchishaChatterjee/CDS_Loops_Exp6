# Lab Manual: Loops in C++ with Example Programs

## Aim
- To study and implement loops in C++.
- To apply loops in solving simple problems such as printing patterns, calculating averages, and repeating output.

## Apparatus
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Loops in C++
Loops allow the execution of a block of code multiple times, based on a condition. This helps in reducing redundancy and making code more efficient.

C++ supports the following types of loops:
- `for` loop
- `while` loop
- `do...while` loop

These loops are essential for performing repetitive tasks like traversing arrays, generating patterns, or computing values repeatedly.

---

## Program 1: Star Pattern

### Problem  
Print a right-angled triangle of stars for `n` rows.

### Algorithm
1. Start  
2. Declare an integer variable `n`  
3. Read value of `n` from the user  
4. Use a `for` loop from `i = 1` to `n`  
   - Inside this loop, use another `for` loop from `j = 1` to `i`  
   - Print `*` in each inner loop iteration  
   - Move to the next line after the inner loop  
5. End

---

## Program 2: Average of Marks

### Problem  
Read marks of `n` subjects and calculate the average.

### Algorithm
1. Start  
2. Declare variables: `n`, `sum = 0`, and `average`  
3. Read value of `n` (number of subjects)  
4. Use a `for` loop from `i = 1` to `n`  
   - In each iteration, read a mark and add it to `sum`  
5. Calculate average as `sum / n`  
6. Display the average  
7. End

---

## Program 3: Printing a Word Multiple Times

### Problem  
Take a word and a number `n`, and print the word `n` times.

### Algorithm
1. Start  
2. Declare an integer `n` and a string `word`  
3. Read values for `n` and `word` from the user  
4. Use a `for` loop from `i = 1` to `n`  
   - Print the word in each iteration  
5. End

---

## Functions

- Implement loops for repetition-based tasks.
- Use nested loops for patterns and visual structures.
- Apply loops in real-world use cases like averaging input data.
- Understand how to control the flow of repetition using loop counters.

## Conclusion
Through this lab, I learned how to apply loops in C++ to solve practical problems. I implemented nested loops for pattern generation, used loops for mathematical calculations, and performed repeated printing tasks. Writing algorithms beforehand helped me structure my approach and understand how looping logic works in different scenarios.
