# C++ Console Calculator

This is a simple **console-based calculator** written in C++. It allows the user to perform basic arithmetic operations: addition, subtraction, multiplication, and division.

## How It Works

1. **User Input**  
   - The program prompts the user to enter two numbers.  
   - Then, it asks the user to enter an arithmetic operator (`+`, `-`, `*`, or `/`).

2. **Operations**  
   - Based on the operator entered, the program calls the corresponding function:
     - `add(a, b)` → returns the sum of `a` and `b`  
     - `subtract(a, b)` → returns the difference  
     - `multiply(a, b)` → returns the product  
     - `divide(a, b)` → returns the quotient  

3. **Loop for Multiple Calculations**  
   - After performing a calculation, the program asks the user if they want to continue.  
   - Enter `q` to quit, or any other key to perform another calculation.

4. **Output**  
   - The result is displayed in the format:  
     ```
     num1 operator num2 = result
     ```
