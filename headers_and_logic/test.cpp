/* #include"header.hpp"


//--------------------------------------//


int main() {
    vector<int> q = {};

    q = push_q(q, 10);
    q = push_q(q, 20);
    q = push_q(q, 30);

    print_queue(q);

    int e = pop_q(q);
    printf("popped %d\n", e); // 10 to be popped

    return 0;
}

void print_queue(vector<int> q) {
    for(int i=0; i<q.size(); i=i+1) {
        printf("%d, " q.at(i));
    }
    return ;
}

vector<int> push_q(vector<int> q, int e){
    q.push_back(e);
    return q;
}

void pop(vector<int> q) {
    r = q[0];                   //save the popped elem
    q.erase(0)(q.begin());      //pop the elem
    return r;                   //return popped elem
}
*/