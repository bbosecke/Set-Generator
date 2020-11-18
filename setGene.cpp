#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>

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

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        //check to see if the key is already in the unordered_map
        auto result = map.find(val); // how exactly does this work... https://www.youtube.com/watch?v=r01r8mEs9I4
        if(result != map.end()){
            //prints contents of the val trying to be inserted - testing purposes
            //std::cout << result->first << endl;
            return false;
        }   
        map[val] = i;
        vec.push_back(val);
        i++;
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. 
    *
    *   removes O(1) from the unordered_map, however cannot get a swap working, so using this way as a placeholder,
    *   which I believe to be O(n) as it iterates through the vector to find the value index to remove
    */
    bool remove(int val) {
        auto result = map.find(val);
        //enters if I NEED to remove from map + vec
        if(result != map.end()){
            //std::cout << result->first << " <- first second -> " << result->second << endl;
            map.erase(val);
            auto index = std::find(vec.begin(), vec.end(), val);
            vec.erase(index);

            // int posLast = vec.size()-1;
            // int posVal = 1;
            // //std::swap(vec[posVa;],vec[posLast]);
            // //used swap with java, there's a swap function in <vector>
            return true;
        }
        
        return false;
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
    obj.insert(22);
    obj.insert(12);
    obj.remove(12);
    obj.remove(13);
    obj.remove(5);
    

    
    obj.checkContentsVec();
    obj.checkContentsMap();
    
    return 0;
}