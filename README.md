Lab 2: C++ Exercises — Build, Test, and Explain
Course Section:CIS-165-B030


How to Compile and Run

Using OnlineGDB (Browser-based)
1. Go to [OnlineGDB](https://www.onlinegdb.com/).
2. Select **C++17** from the language dropdown menu in the top-right corner.
3. Open or upload `sum.cpp` or `mpg.cpp`.
4. Click the green **Run** button at the top to compile and execute.
 
 
 Plans & Pseudocode

    Program 1: sum.cpp
- Plan: Declare two integer variables to store the values 50 and 100. Declare a third integer named `total` to store the sum. Add the two values, put the result to `total`, and display `total` to the console.
- Pseudocode:
  num1 = 50
  num2 = 100
  total = num1 + num2
  PRINT "Total sum: " + total
  
    Program 2: mpg.cpp
- Plan: Declare double variabless for miles, gallons, and mpg to hold decimal values. Store 312 in miles and 16 in gallons. Calculate miles divided by gallons, assign the result to mpg, and display mpg with clear units.
- Pseudocode:
  miles = 312.0
  gallons = 16.0
  mpg = miles / gallons
  PRINT "Miles per gallon: " + mpg + " MPG"
  
| Program | Values used | Expected result before running | Actual output | Match or fix |
| :--- | :--- | :--- | :--- | :--- |
| **sum.cpp** — assigned values | 50 and 100 | 150 | Total: 150 | Match |
| **sum.cpp** — changed values | 125 and 375 | 500 | Total: 500 | Match |
| **mpg.cpp** — assigned values | 312 miles; 16 gallons | 19.5 miles per gallon | The mpg the car has = 19.5 | Match (Fixed integer division by using double) |
| **mpg.cpp** — changed values | 405 miles; 12 gallons | 33.75 miles per gallon | The mpg the car has = 33.75 | Match |
Code Restoration Note: After completing all test runs with changed values, I restored sum.cpp and mpg.cpp back to their original assigned values (50/100 and 312/16), re-compiled both programs, and verified that they produced the original expected outputs before final submission.

CODE EXPLAINATIONS

Program 1:
Data Flow: The starting values 50 and 100 are stored in integer variables. The program calculates their sum using the addition operator (+) and stores the resulting value (150) into the variable total. Finally, std::cout sends the labeled output containing total to the screen.
Why Store in total First? Storing the sum in total before printing separates the calculation logic from the output logic. This makes the code easier to read, debug, and maintain. It also allows the calculated value to be reused later in the program if needed.


Program 2:
Formula & Data Types: The formula used is MPG = miles/gallons. I selected the double data type for miles, gallons, and mpg because fuel economy calculations require floating-point numbers to retain precision.
Integer Division Risk: If C++ performs division using two integer operands (int / int), it performs integer division, which drops the entire decimal portion before storing or displaying the result. For instance, dividing 312 by 16 as integers gives 19 instead of 19.5. Using double ensures that C++ carries out floating-point division and preserves the fractional result.
