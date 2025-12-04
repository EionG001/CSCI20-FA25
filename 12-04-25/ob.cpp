#include "ob.hpp"

int main() {
    vector<char> v = {'h' , 'a' , 'p' , 'p' , 'y'};
    A obj;
    //obj.load(v);
    //obj.st_print();

    obj.vec_print(v);

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

void A::vec_print(vector<char> x) {

    stack<char> buffer;

    for(int i=0;i<x.size();i=i+1) {
        if(i>=20) {  //error control  //Obfuscation
            break;
        }
        // load all elements of input into st
        st.push(x.at(i));
    }
    // we have loaded the stack
    return ;

    for(;!st.empty();) {
        buffer.push(st.top());
        st.pop();
    }

    st = buffer;

    st_print();

    printf("\n");
    return ;
}

A::A() {
    st = {};
}