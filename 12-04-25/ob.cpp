#include "ob.hpp"

int main() {
    return 0;
}

void A::load(vector<char> input) {
    for(int i=0;i<input.size();i=i+1) {
        // load all elements of input into st
        st.push(input.at(i));
    }
    return ;
}

// A:: makes it so the print in cpp communicates specifically with the print in hpp

void A::st_print() {
    
    for(/*declare an iterator*/;
        !st.empty();
        /*declare increment*/) {
        char top = st.top();
        st.pop();

        printf("%c", top);
    }
    return ;
}

A::A() {
    st = {};
}