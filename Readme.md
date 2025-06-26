
Problem 1: Basic Calculator Using a Class
-----------------------------------------
Description:
Implements a calculator that performs operations: add, subtract, multiply, and divide.

Features:
- Takes user input for two numbers (a, b) and an operation.
- Uses a class Calculator with a method compute() to perform the chosen operation.
- Division outputs a result formatted as a floating-point number (2 decimal places).

Sample Input:
Enter first number: 10
Enter second number: 3
Enter operation (+, -, *, /): divide

Sample Output:
Result: 3.33


Problem 2: Generate Odd Number Series up to a
---------------------------------------------
Description:
Generates a series of the first a odd numbers.

Logic:
For a = 4, the output is: 1, 3, 5, 7
Formula used: 2*i + 1 for i in range 0 to a-1.


Problem 3: Odd Number Series up to a, Adjusted by Even/Odd
-----------------------------------------------------------
Description:
Generates an odd number series where:
- If a is odd: output contains a numbers.
- If a is even: output contains a - 1 odd numbers.

Logic Example:
Input: a = 5 -> Output: 1, 3, 5, 7, 9
Input: a = 6 -> Output: 1, 3, 5, 7, 9

This is achieved by adjusting the limit condition inside the loop depending on whether a is even or odd.


Problem 4: Count Multiples of 1–9 in a List
-------------------------------------------
Description:
Takes a list of numbers as input and counts how many are divisible by each number from 1 to 9.

Implementation:
- Inputs are taken dynamically into a vector.
- A map stores counts of how many numbers are divisible by each digit from 1 to 9.
- Nested loops are used to update counts.

Sample Input:
Enter the number of elements: 5
Enter the elements:
2 4 6 9 12

Sample Output:
1: 5
2: 4
3: 3
4: 2
5: 0
6: 2
7: 0
8: 0
9: 1


How to Run
----------
1. Compile the code using any C++ compiler (e.g. g++ filename.cpp -o output)
2. Run the executable: ./output
3. Follow the prompts to enter inputs.


Files
-----
File Name                 | Description
-------------------------|----------------------------------------------
calculator.cpp           | Contains the class-based calculator logic
odd_series.cpp           | Generates the basic odd number series
conditional_odd_series.cpp | Generates the adjusted odd number series
multiples_counter.cpp    | Counts multiples of 1–9 in a user-defined list


Concepts Covered
----------------
- Classes and Object-Oriented Programming
- Loops (for, if-else)
- STL containers (vector, map)
- Input/output handling
- Type casting and formatting (fixed, setprecision)
