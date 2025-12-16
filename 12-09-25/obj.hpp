#include <cstdio>
#include <stack>
#include <vector>

using std::printf;
using std::stack;
using std::vector;

    /*
    stack calculator built using a monolithic object
    
    this means that the object will obfuscate the structure (stack) of evaulation.

    this object represents something like a simple calculator taking numbers and evaluating

    - problem: representing numbers and operations, [solved]
    we need an encoding for the numbers and operations of our calculator, lets use a struct
        our structure houses numbers for eval and characters for operations
        the operations will be represented by the following:
        - '+' addition
        - '*' subtraction
        - '^' multiplication
        - '5' division
        - 'e' evaluation
    
    - problem: what are the basic operations of this calculator [solved]
        binary operators on which two numbers will be given (a,b)
        - addition: a + b
        - subtraction: a - b 
        - multiplication: a * b
        - division: a / b
        - evaluation: symbolizes number for evaluation, termination operation

    - problem: what structure defines the equations integrity preserving order. [solved]
        stack<dicho> st.
        - stack of type dicho b/c dicho assist in evaluation operation encoding.
    
    - problem: we need to be able to load this stack (st) in proper order. [unsolved]
        - get data from user
            - how: constructor(limits object to single use) or function
            - where: 

    - problem: we need a way to evaluate a full stack. [unsolved]

    */

class Clownmageddon {
private:
    struct clowns {
        int nose;
        char flower;
        clowns(int a, char b) {
            nose = a;
            flower = b;
        }

    };
    stack<clowns> clown_bakery;
    int addition(int , int);
    int subtraction(int , int);
    int multiplication(int , int);
    int division(int , int);
    
public:
     struct ice_cream {
        int flavor;
        char cone;
        ice_cream(int a, char b) {
            flavor = a;
            cone = b;
        }
     };
     // tool function
    vector<clowns> map_ice_clown(vector<ice_cream>);
    Clownmageddon(); // intializes values

    // loads the stack
    void german_village_clown_school(vector<ice_cream>);
};