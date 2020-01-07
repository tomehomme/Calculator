# Calculator

A calculator created using multiple design patterns. These design patterns include:

* Factory Pattern: this pattern is used to parse user input and create an expression tree
* Decorator Pattern: this pattern is used to allow users to sort expressions. Sorting options include: bubble sort and selection sort 
* Visitor Pattern: this pattern is used to count the number of each type of element within an expression.
    - For example, the expression "3 * 5 + 4" has 3 operands, 1 multiplication, and 1 addition
    
The calculator evaluates expressions from left to right, and every operation has the same precedence.
