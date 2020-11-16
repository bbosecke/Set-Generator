import java.util.ArrayList;
import java.util.HashMap;
import java.util.Random;
import java.util.Collections;

class SetGenerator{

    ArrayList<Integer> arr;
    HashMap<Integer, Integer> hash;
    int i = 0;

    /** Initialize your data structure here. */
    public SetGenerator() {
        arr = new ArrayList<Integer>();
        hash = new HashMap<Integer, Integer>();
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. 
     * 
     * Checks the HashMap for val trying to be inserted.
     * If it does not exist in the HashMap, then add to both (end of) ArrayList and HashMap
    */
    public boolean insert(int val) {
        if(hash.get(val) != null){
            return false;
        }
        //int i = arr.size();
        arr.add(val);
        hash.put(val, i);
        i++;

        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    public boolean remove(int val) {
        Integer index = hash.get(val);
        //If index doesn't exist, return false
        if(index == null){
            return false;
        }
        //System.out.println(hash.entrySet());

        hash.remove(val);

        //beacuse the value being removed isn't in the correct pos in the ArrayList, need to swap
        //to make it the last pos in list
        int arrSize = arr.size();
        //System.out.println(arrSize);
        //System.out.println(index);
        int posLast = arrSize-1;
        //System.out.println(posLast);
        Collections.swap(arr, index, posLast);
        arr.remove(posLast);
        //System.out.println(arr.size());
        //System.out.println(hash.entrySet());

        return true;
    }

    /** Get a random element from the set. */
    public int getRandom() {
        Random rand = new Random();
        int randPos = rand.nextInt(arr.size());
        int key = arr.get(randPos);
        return key;
    }   

    /**
    * contents prints the current contents of the ArrayList and HashMap for testing purposes,
    * and ensuring that everything is in there that should be contained
    */
    public void printContents(){
        System.out.print("ArrayList contents: ");
        for(int i = 0; i < arr.size(); i++){
            System.out.print(arr.get(i) + " " );
        }
        System.out.println();
        System.out.println("HashMap contents: " + hash.entrySet());
    }
}

