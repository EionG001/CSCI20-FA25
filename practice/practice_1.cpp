#include <cstdio> //includes printf library

int my_sum(int x, int y) {  //define a function name: my_sum, output: int, inputs: int, int (Boolean and Char are integers)
        return x + y;       //describes the output
}

/* anytime you use a function you must call it in the form <name>(<inputs>)*/

int main() {
    std::printf("%d\n", my_sum(1,1));
    return 0;
}