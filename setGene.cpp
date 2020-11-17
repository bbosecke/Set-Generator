#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class SetGene {

public:
    /** Initialize your data structure here. */
    //Vector - "arrays that can change size"
    vector<int> vec;
    //Unordered_map - keyValue pairs with unique keys
    unordered_map<int, int> map;


    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        vec.push_back(val);
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

    //check contents of vector --> https://stackoverflow.com/questions/10750057/how-to-print-out-the-contents-of-a-vector 
    void checkContentsVec() {
        for(std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
            std::cout << *i << ' '; 
        std::cout << " " << endl;
    }
};


//Program driver, this is where I call functions from, create object, etc...
int main(){
    std::cout << "Welcome, Brodie" << std::endl;
    SetGene obj;

    //Test to see if initialized datastructures vec and map
    obj.insert(1);
    obj.insert(5);
    obj.insert(2);
    obj.checkContentsVec();
    
    return 0;
}