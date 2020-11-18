#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

//global variable used as value in unordered_map
int i = 0;

class SetGene {

public:
    /** Initialize your data structure here. */
    //Vector - "arrays that can change size"
    vector<int> vec;
    //Unordered_map - keyValue pairs with unique keys
    std::unordered_map<int, int> map;

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. 
    * working insert into vec
    *
    * CHECKLIST : 
    *       check that value is unique (map)
    *       make changes to the unordered_map
    */
    bool insert(int val) {
        //check to see if the key is already in the unordered_map
        //if(map.contains(val)){
        //   return false;
        //}

        //if(map.contains(val)){
        //    std::cout << "HELLO" << std::endl;
        //}

        //makes ure these are the right way round, [key, value]
        map[val] = i;
        vec.push_back(val);
        i++;
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

    /**
    * check contents of vector to ensure that it is in the
    * state that it should be in.
    * 
    * https://stackoverflow.com/questions/10750057/how-to-print-out-the-contents-of-a-vector 
    */
    void checkContentsVec() {
        std::cout << "The values in the vector: ";
        for(std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
            std::cout << *i << ' '; 
        std::cout << " " << endl;
    }

    void checkContentsMap(){
        std::cout << "The values in the unordered_map: [key, value]";
        for(auto i : map){
            std::cout << " [" << i.first << " " << i.second << "]" ;
        }
        std::cout << " " << std::endl;
    }
};


//Program driver, this is where I call functions from, create object, etc...
int main(){
    std::cout << "Welcome, Brodie" << std::endl;

    SetGene obj;

    //Test to see if initialized datastructures vec and map
    obj.insert(1);
    obj.insert(5);
    obj.insert(12);
    obj.insert(12);
    
    obj.checkContentsVec();
    obj.checkContentsMap();
    
    return 0;
}