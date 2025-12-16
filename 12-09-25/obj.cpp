#include "obj.hpp"

int main() {
    Clownmageddon clownmageddon;
    vector<Clownmageddon::ice_cream> load_eq = {};
    // test: 1 + 1
    Clownmageddon::ice_cream x(0, '+');
    Clownmageddon::ice_cream y(1, 'e');
    Clownmageddon::ice_cream z(1, 'e');

    load_eq.push_back(x);
    load_eq.push_back(y);
    load_eq.push_back(z);

    clownmageddon.german_village_clown_school(load_eq);

    return 0;
}

void Clownmageddon::german_village_clown_school(vector<ice_cream> x) {
    map_ice_clown(x);
    return ;
}

vector<Clownmageddon::clowns> Clownmageddon::map_ice_clown(vector<ice_cream> x) {
    vector<Clownmageddon::clowns> shoes = {};
    for(int i=0;i<x.size(); i=i+1) {
        // the set in the case of x.size = 3 is [i=0 i=1 i=2, TERMINATE]
        // for each ice cream, make a new clown
        clowns c(x.at(i).flavor, x.at(i).cone);
        shoes.push_back(c);
        printf("%d, %c\n", c.nose, c.flower);
    }
    return shoes;
}