#include <cstdio>
#include <stack>
using std::printf;

    /*
    stack calculator built using a monolithic object
    
    this means that the object will obfuscate the structure (stack) of evaulation.

    this object represents something like a simple calculator taking numbers and evaluating

    - problem: representing numbers and operations, solved.
    we need an encoding for the numbers and operations of our calculator, lets use a struct
        our structure houses numbers for eval and characters for operations
        the operations will be represented by the following:
        - '+' addition
        - '*' subtraction
        - '^' multiplication
        - '5' division
        - 'e' evaluation
    
    - problem: what are the basic operations of this calculator
        binary operators on which two numbers will be given (,b)
        - addition: a + b
        - subtraction: a - b 
        - multiplication: a * b
        - division: a / b
        - evaluation: 

    - problem: what structure defines the equations integrity preserving order.
    */

    class Calc{
    private:
        struct dicho {
        int num;
        char op;
        };
    public:
    };

    