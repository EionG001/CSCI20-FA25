//Use cppreference to figure out how to make array, make 3 different types of arrays
//When checking, make sure you are using the most recent example code
//Print element1 using printf
//Make 3 distinct types of array

#include <cstdio> //includes library "cstdio" for use of [printf]
#include <array> //includes library "array" for use of [array]
#include <string> //includes library "string" for use of [string]
#include <vector> // Includes library "vector" for use of [vector]

using namespace std;

char vegtible(char a, char b) {
    return a + b;
}

int main() {

    std::array<int, 6> numbers = {1,2,3,4,5,6}; // "type", "size"> "name" = {"elements (seperated by commas)"};

    std::printf("%i\n", numbers.at(0));

    //std::array<std::array<char, 9>, 10> greeting = {'h', 'i', ' ', 'h', 'u', 'm', 'a', 'n', 's'};
    std::array<char, 8> hi = {'h','i',' ','t','h','e','r','e'};

    std::printf("%c\n", hi.at(0)); // \n is endline character

    std::array<std::string, 2> hello = {"hello", "There"};

    std::printf("%s\n", hello.at(0).c_str());

    //Vectors

    vector<int> rat = {0,1,2,3,4,5};
    printf("%d", rat.at(0));

    //Function
    char a = 127;
    char b = 1;
    printf("%d\n", vegtible(a,b));


    return 0;
}