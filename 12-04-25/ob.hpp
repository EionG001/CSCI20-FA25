#include <cstdio>
#include <stack>
#include <vector>

using std::stack;
using std::vector;

class A {
    private:
        stack<char> st;
    public:
        // constructor
        A();
        // loads character vector to be unloaded in st
        void load(vector<char>);
        // prints all content of stack
        void st_print();
        // obfuscation
        void vec_print(vector<char>);
};