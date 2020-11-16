import java.util.ArrayList;
import java.util.Random;

class SetGenerator{

    ArrayList<Integer> arr;

    /** Initialize your data structure here. */
    public SetGenerator() {
        arr = new ArrayList<Integer>();
    }

    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    public boolean insert(int val) {
        if(arr.contains(val) == true){
            return false;
        }
        arr.add(val);
        return true;
    }

    /** Removes a value from the set. Returns true if the set contained the specified element. */
    public boolean remove(int val) {
        if(arr.contains(val) == true){
            arr.remove(val);
            return true;
        }
        return false;
    }

    /** Get a random element from the set. */
    public int getRandom() {
        Random rand = new Random();
        int randPos = rand.nextInt(arr.size());
        return arr.get(randPos);
    }   

    public void contents(){
        for(int i = 0; i < arr.size(); i++){
            System.out.println("Printing contents: " + arr.get(i));
        }
    }
}

