Here is a solution to training problems in C++. A description of the tasks can be found here:
-3. Write a program Hello, world! in C-style (using stdio.h and printf())
-4. Write a program Hello, world! in C++-style, i.e. using iostream and std::cout
-5. Write a C++-style program that enters a name from the keyboard and displays a greeting.
-6. Enter a string from the keyboard, copy it to another string and output it. Example output:
Enter the string: stringalala
Copy of the line: linelala
You cannot use strcpy() or string::copy(), i.e. copying must be done using a loop!
-7. Dichotomous number guessing algorithm. The computer asks you to think of a number from 1 to 100 and begins to guess it. It takes a valid range of values, divides it in half and asks to compare the intended number with the middle of the interval. If the middle is larger, the permissible interval becomes the lower half of the original one, if on the contrary, it becomes the upper half. And so on until it hits the exact number. The user plays honestly (does not cheat, does not change the number in the process).
-8. Enter a number from the keyboard and determine whether it is prime. A prime (I remind you from mathematics) is a natural number that has no divisors other than itself and one.
-9. Wonder Field Game mini-algorithm
-11. Add to the Wonder Field:
- Checking that the letter has already been named. If yes, then display the message “This letter has already been used, try again.”
- Ability to guess the word. If the user enters more than one character, we treat this as an attempt to guess the word. If it matches, the user wins. If not, the inscription "Sorry, you didn't guess the word. You lost." and the end.
12. Factorial of a number. The user enters a number from the keyboard, the program displays its factorial.
13. Fibonacci numbers. The user enters a number N from 1 to 100 from the keyboard, the program displays the first N Fibonacci numbers one after another separated by a space. The input is checked for correctness:
- if the user entered not a number, but a string
- if the user entered a number <1
- if the user entered a non-integer number
- if the user entered a number greater than 100
14. Enter the number N from the keyboard. Write an algorithm (sequence of rearrangement) of the classical (three rods) Hanoi pyramid
15. Write code that calculates float, double and long double types:
- machine 0
- machine infinity, + and -
- machine epsilon
- the sum and difference of machine zero and machine epsilon.
16. Passing parameters by reference and sorting.
- Write three versions of the function for exchanging the values ​​of two integer variables. Those. at the input it has two integer parameters i1 and i2, and at the output i1 = i2, and i2 = i1. One of the options can be through a temporary variable, the other two should not have a temporary variable.
- Implement one of the array sorting methods.
17. Implement a CRational class, rational fraction, containing:
- fields with integer numerator and denominator.
- functions of addition and multiplication of two fractions
- output of fractions in the "numerator/denominator" format. if the fraction is mixed, then “the whole part is the numerator/denominator.” if the fraction is an integer, then “integer part”.
- initialization of a fraction with two numbers (numerator, denominator).
- if a fraction becomes reducible as a result of any operation, it must be reduced
- the denominator must not be zero
18. Given two rectangles on a plane, the sides are parallel to the coordinate axes. All numbers are real.
- Determine and display the answer whether these rectangles intersect or not. Intersection is defined in a mathematical sense, i.e. if there is at least one common point, then yes, otherwise no.
- To do this: come up with and implement a class architecture to represent a rectangle. All data that is not necessary to open must be closed (private). The class must have a constructor with an initialization list that allows you to create a rectangle by calling like
CRectangleClass restangle1(param1, param2, ...)
19. Implement classes for FIFO (queue) and LIFO (stack)
20. Implement a CSlice class that does the same thing with an array of integers that a slice does in Python.
22. Write code and plot graphs of the following functions in Tecplot:
- y=sin(x), 0 < x < 2*pi, on a uniform grid of 100 cells
- y=x*sin(x), -100 < x < 100, on a uniform grid of 200 cells
- z=sin(x)*sin(y), 0 < x, y < 2*pi, uniform grid of 100*100 cells
- z=F(x,y) where F(x,y) is the density of the two-dimensional standard normal distribution.
23. Do a task about LIFO and FIFO using inheritance from an abstract base class.
24. Implement a 2D object class, a basic abstract one, or an interface. The class must contain pure virtual functions move() (move an object by a vector), show() (draw an object), rotate() (rotate by a given angle) and scale() (stretch/compress an object). Inherit two classes from it: circle and square, define these functions for them and set the necessary data parameters. In the main() function, create an array of several objects of different types and draw them. Then perform basic actions on three of them (move, scale, rotate), and draw again.
25. C++ Exceptions. In a CRational or CSlice task of your choice, make 6 reproducible checks using exceptions:
- 3 exceptions to standard division by 0 types or type errors
- 3 exceptions of your own for error handling
Be able to explain why you chose these particular situations for exceptions.
