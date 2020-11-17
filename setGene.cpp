#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class SetGene {

public:
    /** Initialize your data structure here. */
        //Vector - "arrays that can change size"
        std::vector<int> vec;
        //Unordered_map - keyValue pairs with unique keys
        std::unordered_map<int, int> map;

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        return true;
    }

    /** Get a random element from the set. */
    int getRandom() {
        return 0;
    }
};


//Program driver, this is where I call functions from, create object, etc...
int main(){
    std::cout << "Welcome, Brodie" << std::endl;
    
    return 0;
}